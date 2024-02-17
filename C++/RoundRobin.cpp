#include <iostream>
#include <vector>
using namespace std;
struct Process {
    int pid; 
    int bt; 
    int art; 
    int rem_bt;
};
void roundRobinScheduling(Process processes[], int n, int quantum) {
    vector<int> waiting_time(n, 0); 
    int time = 0; 
    int completed = 0;

    while (completed < n) {
        bool flag = false; 
        for (int i = 0; i < n; i++) {

            if (processes[i].rem_bt > 0 && processes[i].art <= time) {
                flag = true;

                int execute_time = min(processes[i].rem_bt, quantum); 
                time += execute_time;
                processes[i].rem_bt -= execute_time;

                waiting_time[i] += time - processes[i].art - processes[i].bt;


                if (processes[i].rem_bt == 0) {
                    cout << "Process " << processes[i].pid << " completed at time " << time << endl;
                    completed++;
                }
            }
        }
        if (!flag) {
            time = processes[completed].art;
        }
    }


    double avg_waiting_time = 0;
    for (int i = 0; i < n; i++) {
        avg_waiting_time += waiting_time[i];
    }
    avg_waiting_time /= n;
    cout << "Average waiting time: " << avg_waiting_time << endl;
}

int main() {
    int n, quantum;
    cout << "Enter the number of processes: ";
    cin >> n;

    Process processes[n];
    cout << "Enter burst time and arrival time of each process:\n";
    for (int i = 0; i < n; i++) {
        processes[i].pid = i;
        cin >> processes[i].bt >> processes[i].art;
        processes[i].rem_bt = processes[i].bt;
    }

    cout << "Enter time quantum: ";
    cin >> quantum;

    roundRobinScheduling(processes, n, quantum);

    return 0;
}
