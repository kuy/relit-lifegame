{
open Parser
}

rule read =
  parse
  | "o" { ALIVE }
  | "x" { DEAD }
  | eof { EOF }
