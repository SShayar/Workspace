<?php	
	
	include ('include/header.php'); 

?>

<style>
	 @import url('https://fonts.googleapis.com/css2?family=Exo+2:wght@500&display=swap');
.size{
	min-height: 0px;
	padding: 60px 0 40px 0;
	font-family: 'Exo 2', sans-serif;
		
	}
	.loader{
		display:none;
		width:69px;
		height:89px;
		position:absolute;
		top:25%;
		left:50%;
		padding:2px;
		z-index: 1;
	}
	.loader .fa{
		color: #e74c3c;
		font-size: 52px !important;
	}
	.form-group{
		text-align: left;
	}
	h1{
		color: white;
	}
	h3{
		color: #e74c3c;
		text-align: center;
	}
	.red-bar{
		width: 25%;
	}
	span{
		display: block;
	}
	.name{
		color: #e74c3c;
		font-size: 22px;
		font-weight: 700;
	}
	.donors_data{
		background-color: white;
		border-radius: 5px;
		margin:20px 5px 0px 5px;
		-webkit-box-shadow: 0px 2px 5px -2px rgba(89,89,89,0.95);
		-moz-box-shadow: 0px 2px 5px -2px rgba(89,89,89,0.95);
		box-shadow: 0px 2px 5px -2px rgba(89,89,89,0.95);
		padding: 20px;
	}
	.donor {
            border: 1px solid #ccc;
            padding: 10px;
            margin: 10px;
            max-width: 400px;
            box-shadow: 0 0 5px rgba(0, 0, 0, 0.2);
        }

        .like-btn {
            cursor: pointer;
            color: gray;
        }

        .liked {
            color: red;
        }

        .stars {
            display: flex;
            gap: 5px;
        }
</style>
<div class="container-fluid red-background size">
	<div class="row">
		<div class="col-md-6 offset-md-3">
			<h1 class="text-center">Donors</h1>
			<hr class="white-bar">
		</div>
	</div>
</div>


	<div class="alert alert-danger alert-dismissible fade show" role="alert">
                <strong>Our Life Savers family</strong>
     </div>

     <br>
	 <div class="donor">
        <h2>Name: Krishan</h2>
        <p>Blood Group: o+</p>
        <p>Contact Number: +91 123-456-7890</p>
        <p>Email: Krishan@.com</p>
        <div class="stars">
            <span onclick="rateDonor(this, 5)" class="star">☆</span>
            <span onclick="rateDonor(this, 4)" class="star">☆</span>
            <span onclick="rateDonor(this, 3)" class="star">☆</span>
            <span onclick="rateDonor(this, 2)" class="star">☆</span>
            <span onclick="rateDonor(this, 1)" class="star">☆</span>
        </div>
        <p>Average Rating: <span id="rating1">0</span></p>
        <p>
            <span class="like-btn" onclick="toggleLike(this, 1)">Like</span>
            <span id="like1">505</span>
        </p>
    </div>
	 <div class="donor">
        <h2>Name: Amit</h2>
        <p>Blood Group: B+</p>
        <p>Contact Number: +91 923-456-7890</p>
        <p>Email: amit@.com</p>e.com</p>
        <div class="stars">
            <span onclick="rateDonor(this, 5)" class="star">☆</span>
            <span onclick="rateDonor(this, 4)" class="star">☆</span>
            <span onclick="rateDonor(this, 3)" class="star">☆</span>
            <span onclick="rateDonor(this, 2)" class="star">☆</span>
            <span onclick="rateDonor(this, 1)" class="star">☆</span>
        </div>
        <p>Average Rating: <span id="rating1">0</span></p>
        <p>
            <span class="like-btn" onclick="toggleLike(this, 1)">Like</span>
            <span id="like1">0</span>
        </p>
    </div>
	 <div class="donor">
        <h2>Name: John Doe</h2>
        <p>Blood Group: A+</p>
        <p>Contact Number: +1 123-456-7890</p>
        <p>Email: johndoe@example.com</p>
        <div class="stars">
            <span onclick="rateDonor(this, 5)" class="star">☆</span>
            <span onclick="rateDonor(this, 4)" class="star">☆</span>
            <span onclick="rateDonor(this, 3)" class="star">☆</span>
            <span onclick="rateDonor(this, 2)" class="star">☆</span>
            <span onclick="rateDonor(this, 1)" class="star">☆</span>
        </div>
        <p>Average Rating: <span id="rating1">0</span></p>
        <p>
            <span class="like-btn" onclick="toggleLike(this, 1)">Like</span>
            <span id="like1">0</span>
        </p>
    </div>
	 <div class="donor">
        <h2>Name: John Doe</h2>
        <p>Blood Group: A+</p>
        <p>Contact Number: +1 123-456-7890</p>
        <p>Email: johndoe@example.com</p>
        <div class="stars">
            <span onclick="rateDonor(this, 5)" class="star">☆</span>
            <span onclick="rateDonor(this, 4)" class="star">☆</span>
            <span onclick="rateDonor(this, 3)" class="star">☆</span>
            <span onclick="rateDonor(this, 2)" class="star">☆</span>
            <span onclick="rateDonor(this, 1)" class="star">☆</span>
        </div>
        <p>Average Rating: <span id="rating1">0</span></p>
        <p>
            <span class="like-btn" onclick="toggleLike(this, 1)">Like</span>
            <span id="like1">0</span>
        </p>
    </div>
	 <div class="donor">
        <h2>Name: John Doe</h2>
        <p>Blood Group: A+</p>
        <p>Contact Number: +1 123-456-7890</p>
        <p>Email: johndoe@example.com</p>
        <div class="stars">
            <span onclick="rateDonor(this, 5)" class="star">☆</span>
            <span onclick="rateDonor(this, 4)" class="star">☆</span>
            <span onclick="rateDonor(this, 3)" class="star">☆</span>
            <span onclick="rateDonor(this, 2)" class="star">☆</span>
            <span onclick="rateDonor(this, 1)" class="star">☆</span>
        </div>
        <p>Average Rating: <span id="rating1">0</span></p>
        <p>
            <span class="like-btn" onclick="toggleLike(this, 1)">Like</span>
            <span id="like1">0</span>
        </p>
    </div>

    <!-- Add more donor entries as needed -->

    <script>
        function rateDonor(star, rating) {
            const stars = star.parentNode.getElementsByClassName('star');
            for (let i = 0; i < stars.length; i++) {
                stars[i].classList.remove('rated');
            }
            for (let i = 0; i < rating; i++) {
                stars[i].classList.add('rated');
            }
            const ratingSpan = star.parentNode.nextElementSibling.querySelector('span');
            ratingSpan.textContent = rating;
        }

        function toggleLike(likeButton, donorId) {
            const likeSpan = document.getElementById(`like${donorId}`);
            const isLiked = likeButton.classList.contains('liked');
            if (isLiked) {
                likeButton.classList.remove('liked');
                likeSpan.textContent = parseInt(likeSpan.textContent) - 1;
            } else {
                likeButton.classList.add('liked');
                likeSpan.textContent = parseInt(likeSpan.textContent) + 1;
            }
        }
    </script>

<div class="container" style="padding: 60px 0;">
	<div class="row data">
		


	</div>
</div>
<div class="loader" id="wait">
	<i class="fa fa-circle-o-notch fa-spin" aria-hidden="true"></i>
</div>

<?php	

	include ('include/footer.php'); 

?>
