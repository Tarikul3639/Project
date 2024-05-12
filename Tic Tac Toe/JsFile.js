let Boxes = document.querySelectorAll(".Box");
let Reset = document.querySelector(".reset");
let container = document.querySelector(".container");
let drawCheck = true;
let player0 = true; //
let emptyBoxCheck = 0;
let oppps = true;

const winPatterns = [
  [0, 1, 2],
  [0, 3, 6],
  [0, 4, 8],
  [1, 4, 7],
  [2, 5, 8],
  [2, 4, 6],
  [3, 4, 5],
  [6, 7, 8],
];

Boxes.forEach((box) => {
  box.addEventListener("click", () => {
    console.log("box was clicked");
    box.innerText = "O";////////
    if (player0) {
      // player0 turn
      box.innerText = "O";///////
      player0 = false;
    } else {
      //playerx turn
      box.innerText = "X";
      player0 = true;
    }
    box.disabled = true;
    winChecker();
  });
});

let winChecker = () => {
  for (pattern of winPatterns) {
    // console.log(pattern[0], pattern[1], pattern[2]);

    let pos1v1 = Boxes[pattern[0]].innerText;
    let pos2v2 = Boxes[pattern[1]].innerText;
    let pos3v3 = Boxes[pattern[2]].innerText;

    if (pos1v1 != "" && pos2v2 != "" && pos3v3 != "") {
      drawCheck++;
      if (pos1v1 == pos2v2 && pos2v2 == pos1v1 && pos3v3 == pos1v1) {
        drawCheck = false;
        oppps = false;
        winnerMessage(pos1v1);
      }
    }
  }

  if (drawCheck) {
    emptyBoxCheck = 0;
    for (let i = 0; i < Boxes.length; i++) {
      if (Boxes[i].innerText != "") {
        emptyBoxCheck++;
      }
    }
    if (emptyBoxCheck == 9 && oppps == true) {
        let div = document.createElement("div");
        div.classList.add("Message");
        container.appendChild(div);

        let h2_Message = document.createElement("h2");
        h2_Message.classList.add("h2_Message");
        div.appendChild(h2_Message);
        h2_Message.innerText = `Draw The Game`;
      }
    }
};

function winnerMessage(pos1v1) {
  let div = document.createElement("div");
  div.classList.add("Message");
  container.appendChild(div);

  let h2_Message = document.createElement("h2");
  h2_Message.classList.add("h2_Message");
  div.appendChild(h2_Message);
  h2_Message.innerText = `"${pos1v1}" Is Winner`;
}

let reset = document.querySelector(".reset");
reset.addEventListener("click", reset_btn);

function reset_btn() {
  for (box of Boxes) {
    box.disabled = true;
    box.innerText = "";
  }

  for (box of Boxes) {
    box.disabled = false;
  }

  // Check if .Message element exists before trying to access it
  let display_div = document.querySelector(".Message");
  // let display_Message = document.querySelector(".")
  if (display_div) {
    display_div.remove();
  }
  oppps = true;
  drawCheck = true;
}
