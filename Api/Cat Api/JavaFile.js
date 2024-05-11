let url = "https://catfact.ninja/fact";
let pera = document.querySelector("p");
let button = document.querySelector("button");

async function api() {
  try {
    let response = await axios.get(url);
    console.log(response.data.fact);
    pera.innerText = response.data.fact;
  } catch (e) {
    console.log("This program will be not run");
  }
}

button.addEventListener("click", () => {
  api();
});
button.addEventListener("click",()=>
{
  button.style.border = "none";
  setTimeout(() => {
    button.style.border = "";
  }, 1000);
})
