function formValidations() {

    var fname = document.getElementById('fname').value;
    var lname = document.getElementById('lname').value;
    var bdate = document.getElementById('bdate').value;
    var email = document.getElementById('email').value;
    var cemail = document.getElementById('cemail').value;
    var pass = document.getElementById('pass').value;
    var cpass = document.getElementById('cpass').value;

    var registrationFailed = false;

    if (!/^[A-Za-z. ]+$/.test(fname)) {
        alert("First Name shouldn't contain special characters, except period.");
        registrationFailed = true;
    }

    if (!/^[A-Za-z ]+$/.test(lname)) {
        alert("Last Name shouldn't contain special characters, except period.");
        registrationFailed = true;
    }

    if (!/^[0-9/-]+$/.test(bdate)) {
        alert("Birthdate should only contain numbers, dash '-', or slash '/'.");
        registrationFailed = true;
    }

    if (email.indexOf('@') === -1) {
        alert("Email should always contain '@' symbol.");
        registrationFailed = true;
    }

    if (email !== cemail) {
        alert("Emails don't match.");
        registrationFailed = true;
    }

    if (pass.length < 8) {
        alert("Password should have at least 8 characters.");
        registrationFailed = true;
    }

    if (pass !== cpass) {
        alert("Passwords don't match.");
        registrationFailed = true;
    }

    if (!registrationFailed) {
        alert("Registered Successfully!");
    } 
    
    else {
        alert("Registration Failed!");
    }

}
