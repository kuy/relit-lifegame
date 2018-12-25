open Lifegame_notation;

let () = {
  let b = $board `(o)`;
  Board.to_string(b) |> print_endline;
  print_endline("Hello, Relit!");
};
