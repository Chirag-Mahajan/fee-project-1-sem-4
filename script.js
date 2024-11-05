const bar = document.getElementById('bar');
const close = document.getElementById('close');

const nav = document.getElementById('navbar');

if (bar) {
    bar.addEventListener('click',() =>{
        nav.classList.add('active');
    })
}

if (close) {
    close.addEventListener('click',() =>{
        nav.classList.remove('active');
    })
}


// /* for sign up page */ 
// const form = document.getElementById('form');
// const username = document.getElementById('username');
// const email = document.getElementById('email');
// const password = document.getElementById('password');
// const password2 = document.getElementById('password2');

// form.addEventListener('submit', e => {
//     e.preventDefault();

//     if (validateInputs()) {
//         window.location.href = 'login.html'; 
//     }
// });

// const setError = (element, message) => {
//     const inputControl = element.parentElement;
//     const errorDisplay = inputControl.querySelector('.error');

//     errorDisplay.innerText = message;
//     inputControl.classList.add('error');
//     inputControl.classList.remove('success');
// }

// const setSuccess = element => {
//     const inputControl = element.parentElement;
//     const errorDisplay = inputControl.querySelector('.error');

//     errorDisplay.innerText = '';
//     inputControl.classList.add('success');
//     inputControl.classList.remove('error');
// };

// const validateInputs = () => {
//     const usernameValue = username.value.trim();
//     const emailValue = email.value.trim();
//     const passwordValue = password.value.trim();
//     const password2Value = password2.value.trim();
//     let isValid = true;

//     if (usernameValue === '') {
//         setError(username, 'Username is required');
//         isValid = false;
//     } else {
//         setSuccess(username);
//     }

//     if (emailValue === '') {
//         setError(email, 'Email is required');
//         isValid = false;
//     } else if (!isValidEmail(emailValue)) {
//         setError(email, 'Provide a valid email address');
//         isValid = false;
//     } else {
//         setSuccess(email);
//     }

//     if (passwordValue === '') {
//         setError(password, 'Password is required');
//         isValid = false;
//     } else if (passwordValue.length < 8) {
//         setError(password, 'Password must be at least 8 characters');
//         isValid = false;
//     } else {
//         setSuccess(password);
//     }

//     if (password2Value === '') {
//         setError(password2, 'Please confirm your password');
//         isValid = false;
//     } else if (password2Value !== passwordValue) {
//         setError(password2, "Passwords don't match");
//         isValid = false;
//     } else {
//         setSuccess(password2);
//     }

//     return isValid;
// };

// // Sample function to check email validity
// function isValidEmail(email) {
//     // You can implement your own email validation logic here
//     // This is just a placeholder function
//     return /\S+@\S+\.\S+/.test(email);
// }

/* for search bar*/

document.addEventListener('DOMContentLoaded', function () {
    const searchInput = document.getElementById('searchInput');
    
    searchInput.addEventListener('input', function () {
        const searchTerm = searchInput.value.toLowerCase();
        
    
        const recipes = document.querySelectorAll('.pro');
        
        recipes.forEach(function (recipe) {
            const recipeName = recipe.getAttribute('data-search').toLowerCase();
            const isMatch = recipeName.includes(searchTerm);

            if (isMatch) {
                recipe.style.display = 'block';
            } else {
                recipe.style.display = 'none';
            }
        });
    });
});


