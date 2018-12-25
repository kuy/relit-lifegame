type cell = ALIVE | DEAD;

type board = list(cell);

type t = board;

let rec to_string = b =>
  switch(b) {
  | [] => ""
  | [ALIVE, ...rest] => "1" ++ to_string(rest)
  | [DEAD, ...rest] => "0" ++ to_string(rest)
  };
