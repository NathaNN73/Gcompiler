define i32 @main() {
entry:
  %trieNode = alloca %BinaryTrieNode, align 8
  %0 = getelementptr inbounds %BinaryTrieNode, ptr %trieNode, i32 0, i32 0
  %1 = getelementptr inbounds %BinaryTrieNode, ptr %trieNode, i32 0, i32 1
  %2 = getelementptr inbounds %BinaryTrieNode, ptr %trieNode, i32 0, i32 2
  store ptr null, ptr %0, align 8
  store ptr null, ptr %1, align 8
  store i1 false, ptr %2, align 1

  %3 = getelementptr inbounds %BinaryTrieNode, ptr %trieNode, i32 0, i32 1
  %4 = load ptr, ptr %3, align 8
  %5 = icmp eq ptr %4, null
  br i1 %5, label %createNewNode, label %checkEnd

createNewNode:                                    ; preds = %entry
  %trieNode1 = alloca %BinaryTrieNode, align 8
  %6 = getelementptr inbounds %BinaryTrieNode, ptr %trieNode1, i32 0, i32 0
  %7 = getelementptr inbounds %BinaryTrieNode, ptr %trieNode1, i32 0, i32 1
  %8 = getelementptr inbounds %BinaryTrieNode, ptr %trieNode1, i32 0, i32 2
  store ptr null, ptr %6, align 8
  store ptr null, ptr %7, align 8
  store i1 false, ptr %8, align 1
  store ptr %trieNode1, ptr %3, align 8
  br label %checkEnd

checkEnd:                                         ; preds = %createNewNode, %entry
  %9 = load ptr, ptr %3, align 8
  %10 = getelementptr inbounds %BinaryTrieNode, ptr %9, i32 0, i32 2
  %isEnd = load i1, ptr %10, align 1
  %isNull = icmp eq ptr %9, null
  br i1 %isNull, label %notFound, label %returnBlock

notFound:                                         ; preds = %checkEnd
  br label %returnBlock

returnBlock:                                      ; preds = %checkEnd, %notFound
  %result = phi i1 [ false, %notFound ], [ %isEnd, %checkEnd ]
  ret i1 %result
}


