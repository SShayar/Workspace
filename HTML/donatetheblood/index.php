<?php 

	//include header file
	include ('include/header.php');

?>
<div class="container-fluid header-img">
				<div class="row">
					<div class="col-md-6 offset-md-3">

						<div class="header">
							<h1 class="text-center" style="color: rgb(238, 75, 43);">रक्तदान है महादान, इससे बड़ा न कोई दान।</h1>
						<p class="text-center"  style="color: 	rgb(238, 75, 43);" >Donate the blood to help the others.</p>
						</div>


						<h1 class="text-center">Search The Donors</h1>
						<hr class="white-bar text-center">

						<form action="#" method="get" class="form-inline text-center" style="padding: 40px 0px 0px 5px;">
							<div class="form-group text-center justify-content-center">
							
								<select style="width: 220px; height: 45px;" name="city" id="city" class="form-control demo-default" required>
	<option value="">-- Select --<option value="">-- Select --</option>
								<optgroup title="Chandigarh" label="&raquo; Chandigarh">
									<option value="Chandigarh">Chandigarh</option>
								</optgroup>
								<optgroup title="Punjab" label="&raquo; Punjab">
									<option value="Amritsar">Amritsar</option>
									<option value="Ludhiana">Ludhiana</option>
									<!-- Add other Punjab districts and cities here -->
								</optgroup>
								<optgroup title="Delhi" label="&raquo; Delhi">
									<option value="Delhi">Delhi</option>
									<!-- Add other Delhi districts and cities here -->
								</optgroup>
								<optgroup title="Haryana" label="&raquo; Haryana">
									<option value="Chandigarh">Chandigarh</option>
									<option value="Faridabad">Faridabad</option>
									<!-- Add other Haryana districts and cities here -->
								</optgroup>
								</option>
								</select>
							</div>
							<div class="form-group center-aligned">
								<select name="blood_group" id="blood_group" style="padding: 0 20px; width: 220px; height: 45px;" class="form-control demo-default text-center margin10px">
									
									<option value="O-">O-</option>
									<option value="O+">O+</option>
									<option value="A+">A+</option>
									<option value="A-">A-</option>
									<option value="B+">B+</option>
									<option value="B-">B-</option>
									<option value="AB+">AB+</option>
									<option value="AB-">AB-</option>

								</select>
							</div>
							<div class="form-group center-aligned">
								<button type="submit" class="btn btn-lg btn-danger">Search</button>
							</div>
						</form>
					</div>
				</div>
			</div>
			<!-- header ends -->

			<!-- donate section -->
			<div class="container-fluid red-background">
				<div class="row">
					<div class="col-md-12">
						<h1 class="text-center"  style="color: white; font-weight: 700;padding: 10px 0 0 0;">Donate The Blood</h1>
						<hr class="white-bar">
						<p class="text-center pera-text">
						Blood is the main reason we all are alive; the blood (RBC) carries oxygen from the lungs to all the parts of our body. The moment this process is hampered, a person’s life is in danger. That’s why during many accident cases, the victim dies due to excessive blood loss or brain haemorrhage.

						That’s why sometimes you’ll notice that the hospital is asking the family of the patient to collect blood. If the proper amount of blood isn’t given to the patient’s body, then they might die. So people who donate blood not only do noble work but also save a person’s life when it’s needed.
						</p>
						<a href="#" class="btn btn-default btn-lg text-center center-aligned">Become a Life Saver!</a>
					</div>
				</div>
			</div>
			<!-- end doante section -->
			

			<div class="container">
				<div class="row">
    				<div class="col">
    					<div class="card">
     						<h3 class="text-center red">Our Vission</h3>
								<img src="img/binoculars.png" alt="Our Vission" class="img img-responsive" width="168" height="168">
								<p class="text-center">
								As being a human, we must donate blood to save others life. Through blood donation, we can help various needy people and save their precious life. Blood can be regenerated itself in the body and fulfill its amount, once it is donated but life cannot be got back, once it is gone.
								</p>
						</div>
    				</div>
    				
    				<div class="col">
    					<div class="card">
      							<h3 class="text-center red">Our Goal</h3>
								<img src="img/target.png" alt="Our Vission" class="img img-responsive" width="168" height="168">
								<p class="text-center">
								Blood is the most precious gift that anyone can give to another person – the gift of life. A decision to donate your blood can save a life, or even several if your blood is separated into its components – red cells, platelets and plasma – which can be used individually for patients with specific conditions.
								</p>
						</div>
    				</div>
    			
    				<div class="col">
    					<div class="card">
      						<h3 class="text-center red">Our Mission</h3>
								<img src="img/goal.png" alt="Our Vission" class="img img-responsive" width="168" height="168">
								<p class="text-center">
								Blood donation refers to the process of transfusing blood from a healthy donor to a recipient in need. This process is carried out under the supervision of medical experts. Blood is an essential fluid that flows in our body and keeps our body properly functioning. 
								</p>
							</div>
   			 		</div>
 			</div>
 		</div>

			<!-- end aboutus section -->


<?php
//include footer file
include ('include/footer.php');
 ?>