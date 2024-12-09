function welcomeMessage(){ // alert welcome message
    alert("Welcome to JINGYU's webpage!");
}

function returnToTop(){ // return to top alert
    console.log("return to top button clicked"); // console.log
    alert("return to Top");
}

function copyright_Write(){
    document.write("&#169; 2024. Bae JinGyu all rights reserved."); // document.write
}


const attractionsData = new Map([ // attraction data (map, object)
    ['Gatbawi', {
        imageUrl: 'https://www.gbgs.go.kr/design/tour/img/sub03/storyTelling13_01.jpg', // String
        altText: 'Gatbawi image', // String
        place: 'Palgongsan Mountain' // String
    }],
    ['Park', {
        imageUrl: 'https://gyeongsan.grandculture.net/Image?localName=gyeongsan&id=GC081P01319&t=middle',
        altText: 'Park image',
        place: 'Namsan-myeon, Gyeongsan-si, Gyeongsangbuk-do'
    }],
    ['Reservoir', {
        imageUrl: 'http://www.kbsm.net/data/newsThumb/1682918196ADD_thumb780.jpg',
        altText: 'Reservoir image',
        place: 'Ban-gok-ri, Namsan-myeon, Gyeongsan-si, Gyeongsangbuk-do'
    }],
]);

function showAttractionImage(attraction) { // reusable functions - dynamic content updates
    var button = document.getElementById(`show_image_button_${attraction}`); // var
    if(button){
         button_test = new Boolean(true); // boolean
         console.log(typeof(button_test)); // console.log
    }
    else{
        button_test = new Boolean(false); // boolean
    }
    if (button_test == true) { // Comparison operators
        button.style.display = 'none';
        console.log(attraction, "button clicked"); // console.log
    }

    const imageContainer = document.getElementById(`${attraction}_image`); // const
    const attractionData = attractionsData.get(attraction);

    if (!attractionData) {
        console.error('Invalid attraction name');
        return;
    }

    const image = new Image();
    image.src = attractionData.imageUrl;
    image.alt = attractionData.altText;
    image.width = 300;

    image.onload = function() {
        try { // try catch
            imageContainer.innerHTML = '';
            imageContainer.appendChild(image);
        } catch (error) {
            console.log('Error appending image:', error);
            imageContainer.innerHTML = `<p>${attractionData.altText} not available</p>`;
        }
    };

    image.onerror = function() {
        console.error('Image load failed');
        imageContainer.innerHTML = `<p>Image can't found</p>`;
    };
}

function validateContactForms() { // reusable functions - contact form validation
    const forms = document.querySelectorAll("form.contact-form"); 
    console.log(forms); // check forms console.log
    const userData = new Set(); // contact Set
    let userDataArray = [];

    forms.forEach((form) => {
        const submitButton = form.querySelector("input[type='submit']"); // sumbit button of each form
        
        if (submitButton) {
            submitButton.addEventListener("click", function(event) {
                let valid = true;
                const inputs = form.querySelectorAll("input[type='text'], input[type='email'], input[type='tel'], input[list], input[type='date'], input[type='time'], textarea");
                
                let totalLength = 0; // number
                inputs.forEach((input) => {
                    console.log(`Checking input: ${input.name}, value: "${input.value}"`);
                    if (input.value.trim().length === 0) {
                        alert(`${input.name} cannot be empty`); // if value is empty, show the message that is empty
                        valid = false;
                    } else {
                        totalLength += input.value.trim().length;
                    }
                    console.log(totalLength);
                    
                });
                
                if (valid) { // save user data as set
                    const nameInput = form.querySelector("input[name='name']");
                    const phoneInput = form.querySelector("input[name='phone']");
                    const emailInput = form.querySelector("input[name='email']");
                    const cityInput = form.querySelector("input[name='city']");

                    if (nameInput && nameInput.value.trim().length > 0) userData.add(nameInput.value); // Arithmetic operators, Logical operators
                    if (phoneInput && phoneInput.value.trim().length > 0) userData.add(phoneInput.value); // Arithmetic operators, Logical operators
                    if (emailInput && emailInput.value.trim().length > 0) userData.add(emailInput.value); // Arithmetic operators, Logical operators
                    if (cityInput && cityInput.value.trim().length > 0) userData.add(cityInput.value); // Arithmetic operators, Logical operators

                    const currentUserData = Array.from(userData);  // User data control (Array)
                    // check already submitted information
                    const isDuplicate = userDataArray.some(user => user.phone === phoneInput?.value || user.email === emailInput?.value); 
                    if (isDuplicate) {
                        alert("You have already submitted this information.");
                    } else {
                        userDataArray.push({ // User Data save
                            name: nameInput?.value,
                            phone: phoneInput?.value,
                            email: emailInput?.value,
                            city: cityInput?.value
                        });
                    }

                    console.log(userDataArray);
                }

                if (!valid) {
                    event.preventDefault(); // if value is empty.
                }
            });
        }
    });
}



