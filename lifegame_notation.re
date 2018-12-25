notation $board at Board.t {
  lexer Lifegame_parser.Lexer
  parser Lifegame_parser.Parser.board
  in package lifegame_parser;
  dependencies = {
    module Board = Board;
  };
};
