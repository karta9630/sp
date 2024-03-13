void DOWHILE() {
  // 宣告兩個整數變數，分別用來存儲迴圈的開始標籤和結束標籤
  int whileBegin = nextLabel();
  int whileEnd = nextLabel();

  // 跳過並忽略關鍵字 "do"
  skip("do");

  // 發射（輸出）迴圈的開始標籤
  emit("(L%d)\n", whileBegin);

  // 呼叫 STMT 函式處理迴圈內的語句
  STMT();

  // 跳過並忽略關鍵字 "while" 和左括號 "("
  skip("while");
  skip("(");

  // 計算迴圈的條件表達式，並將結果存儲在變數 e 中
  int e = E();

  // 發射條件判斷的結果，如果條件成立，則跳轉回到迴圈的開始
  emit("if T%d goto L%d\n", e, whileBegin);

  // 跳過並忽略右括號 ")" 和分號 ";"
  skip(")");
  skip(";");
}
