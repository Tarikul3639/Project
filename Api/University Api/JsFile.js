let btn = document.querySelector("button");

// Define the event handler function
const handleButtonClick = async () => {
  let country = document.querySelector(".Country_input").value;
  let university = await universities(country);
  show(university);
  btn.style.border = "none";
  btn.innerText = "Clicked";
  btn.style.backgroundColor = "#3d3d3d";
  setTimeout(async () => {
    btn.style.border = "";
    btn.innerText = "Click";
    btn.style.backgroundColor = "";
  }, 2000);
};

// Attach the event handler function to "click" event
btn.addEventListener("click", handleButtonClick);
//Attach the event handler function to "input" event 
let Country_input = document.querySelector(".Country_input");
Country_input.addEventListener("input",handleButtonClick);

function show(university) {
  let list = document.querySelector(".list");
  list.innerHTML = ""; // Clear existing content of the list
  if (university == "") {
    let country = document.querySelector(".Country_input").value;
    let ul = document.createElement("ul");
    ul.innerText = `"${country}" Is Not A Country`;
    ul.classList.add("versity_url");
    list.appendChild(ul);
    let ulIs = document.querySelector(".versity_url");
    ulIs.style.marginLeft = "12rem";
    ulIs.style.marginTop = "5rem";
    ulIs.style.fontSize = "1.5rem";
    ulIs.style.color = "red";
  }
  for (versity of university) {
    let li = document.createElement("li");
    let ul = document.createElement("ul");
    li.innerText = versity.name;
    ul.innerText = versity.web_pages;
    li.appendChild(ul);
    list.appendChild(li);
    li.classList.add("versity_list");
    ul.classList.add("versity_url");
  }
}

let url = "http://universities.hipolabs.com/search?country=";

async function universities(country) {
  try {
    let country_value = await axios.get(url + country);
    return country_value.data;
} catch (e) {
    
    console.error("An error occurred:", e); // Log the error to the console for debugging
}

}
