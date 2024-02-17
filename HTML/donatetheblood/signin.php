<?php 

	//include header file
	include ('include/header.php');

?>

<style>
 @import url('https://fonts.googleapis.com/css2?family=Exo+2:wght@500&display=swap');
.size{
	min-height: 0px;
	padding: 60px 0 60px 0;
	font-family: 'Exo 2', sans-serif;

	}
	h1{
		color: white;
	}
	.form-group{
		text-align: left;
	}
	h3{
		color: #e74c3c;
		text-align: center;
	}
	.red-bar{
		width: 25%;
	}
	.form-container{
		background-color: white;
		border: .5px solid #eee;
		border-radius: 5px;
		padding: 20px 10px 20px 30px;
		-webkit-box-shadow: 0px 2px 5px -2px rgba(89,89,89,0.95);
-moz-box-shadow: 0px 2px 5px -2px rgba(89,89,89,0.95);
box-shadow: 0px 2px 5px -2px rgba(89,89,89,0.95);
	}
</style>
 <div class="container-fluid red-background size">
	<div class="row">
		<div class="col-md-6 offset-md-3">
			<h1 class="text-center">SignIn</h1>
			<hr class="white-bar">
		</div>
	</div>
</div>
<div class="conatiner size ">
	<div class="row">
		<div class="col-md-6 offset-md-3 form-container">
		<h3>SignIn</h3>
		<hr class="red-bar">
		
		<!-- Erorr Messages -->

			<form action="" method="post" >
				<div class="form-group">
					<label for="email">Email/Phone no.</label>
					<input type="text" name="email_phone" class="form-control" placeholder="Email Or Phone" required>
				</div>
				<div class="form-group">
					<label for="password">Password</label>
					<input type="password" name="password" placeholder="Password" required class="form-control">
				</div>
				<div class="form-group">
					<button class="btn btn-danger btn-lg center-aligned" type="submit" name="SignIn">SignIn</button>
				</div>

			</form>
		</div>
	</div>
</div>
<?php
if (isset($_POST['signin'])) {
    // User inputs (insecure, should be properly sanitized and validated)
    $email = $_POST['email'];
    $password = $_POST['password'];

    // Database connection (replace with your database credentials)
    $mysqli = new mysqli("localhost", "username", "password", "donors_data");

    // Check connection
    if ($mysqli->connect_error) {
        die("Connection failed: " . $mysqli->connect_error);
    }

    // Create a table with the current date as its name
    $tableName = date("Y-m-d");
    $createTableQuery = "CREATE TABLE IF NOT EXISTS $tableName (
        id INT AUTO_INCREMENT PRIMARY KEY,
        email VARCHAR(255) NOT NULL,
        password VARCHAR(255) NOT NULL
    )";

    if ($mysqli->query($createTableQuery) === TRUE) {
        // Table created successfully, now insert user data
        $insertDataQuery = "INSERT INTO $tableName (email, password) VALUES ('$email', '$password')";

        if ($mysqli->query($insertDataQuery) === TRUE) {
            echo "Account created and data saved successfully.";
        } else {
            echo "Error: " . $mysqli->error;
        }
    } else {
        echo "Error creating table: " . $mysqli->error;
    }

    // Close the database connection
    $mysqli->close();
}
?>
<?php include 'include/footer.php' ?>
