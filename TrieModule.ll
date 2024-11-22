; ModuleID = 'GrafoModule'
source_filename = "GrafoModule"

%BinaryTrieNode = type { ptr, ptr, i1 }
%BinaryTrieNode.0 = type { ptr, ptr, i1 }
%BinaryTrieNode.1 = type { ptr, ptr, i1 }
%BinaryTrieNode.2 = type { ptr, ptr, i1 }
%BinaryTrieNode.3 = type { ptr, ptr, i1 }
%BinaryTrieNode.4 = type { ptr, ptr, i1 }
%BinaryTrieNode.5 = type { ptr, ptr, i1 }
%BinaryTrieNode.6 = type { ptr, ptr, i1 }
%BinaryTrieNode.7 = type { ptr, ptr, i1 }
%BinaryTrieNode.8 = type { ptr, ptr, i1 }

@0 = private unnamed_addr constant [4 x i8] c"abc\00", align 1
@1 = private unnamed_addr constant [3 x i8] c"10\00", align 1
@2 = private unnamed_addr constant [5 x i8] c"name\00", align 1
@3 = private unnamed_addr constant [4 x i8] c"101\00", align 1
@4 = private unnamed_addr constant [3 x i8] c"10\00", align 1
@5 = private unnamed_addr constant [4 x i8] c"101\00", align 1

define void @main() {
entry:
  %node = alloca %BinaryTrieNode, align 8
  %0 = getelementptr inbounds %BinaryTrieNode, ptr %node, i32 0, i32 0
  store ptr null, ptr %0, align 8
  %1 = getelementptr inbounds %BinaryTrieNode, ptr %node, i32 0, i32 1
  store ptr null, ptr %1, align 8
  %2 = getelementptr inbounds %BinaryTrieNode, ptr %node, i32 0, i32 2
  store i1 false, ptr %2, align 1

entry1:                                           ; No predecessors!
  %3 = getelementptr inbounds %BinaryTrieNode.0, ptr %node, i32 0, i32 1
  %4 = load ptr, ptr %3, align 8
  %5 = icmp eq ptr %4, null
  br i1 %5, label %createNode, label %nextNode

createNode:                                       ; preds = %entry1
  %node2 = alloca %BinaryTrieNode.1, align 8
  %6 = getelementptr inbounds %BinaryTrieNode.1, ptr %node2, i32 0, i32 0
  store ptr null, ptr %6, align 8
  %7 = getelementptr inbounds %BinaryTrieNode.1, ptr %node2, i32 0, i32 1
  store ptr null, ptr %7, align 8
  %8 = getelementptr inbounds %BinaryTrieNode.1, ptr %node2, i32 0, i32 2
  store i1 false, ptr %8, align 1
  store ptr %node2, ptr %3, align 8
  br label %nextNode

nextNode:                                         ; preds = %createNode, %entry1
  %9 = load ptr, ptr %3, align 8
  %10 = getelementptr inbounds %BinaryTrieNode.0, ptr %9, i32 0, i32 0
  %11 = load ptr, ptr %10, align 8
  %12 = icmp eq ptr %11, null
  br i1 %12, label %createNode3, label %nextNode4

createNode3:                                      ; preds = %nextNode
  %node5 = alloca %BinaryTrieNode.2, align 8
  %13 = getelementptr inbounds %BinaryTrieNode.2, ptr %node5, i32 0, i32 0
  store ptr null, ptr %13, align 8
  %14 = getelementptr inbounds %BinaryTrieNode.2, ptr %node5, i32 0, i32 1
  store ptr null, ptr %14, align 8
  %15 = getelementptr inbounds %BinaryTrieNode.2, ptr %node5, i32 0, i32 2
  store i1 false, ptr %15, align 1
  store ptr %node5, ptr %10, align 8
  br label %nextNode4

nextNode4:                                        ; preds = %createNode3, %nextNode
  %16 = load ptr, ptr %10, align 8
  %17 = getelementptr inbounds %BinaryTrieNode.0, ptr %16, i32 0, i32 2
  store i1 true, ptr %17, align 1
  ret void

entry6:                                           ; No predecessors!
  %18 = getelementptr inbounds %BinaryTrieNode.3, ptr %node, i32 0, i32 1
  %19 = load ptr, ptr %18, align 8
  %20 = icmp eq ptr %19, null
  br i1 %20, label %createNode7, label %nextNode8

createNode7:                                      ; preds = %entry6
  %node9 = alloca %BinaryTrieNode.4, align 8
  %21 = getelementptr inbounds %BinaryTrieNode.4, ptr %node9, i32 0, i32 0
  store ptr null, ptr %21, align 8
  %22 = getelementptr inbounds %BinaryTrieNode.4, ptr %node9, i32 0, i32 1
  store ptr null, ptr %22, align 8
  %23 = getelementptr inbounds %BinaryTrieNode.4, ptr %node9, i32 0, i32 2
  store i1 false, ptr %23, align 1
  store ptr %node9, ptr %18, align 8
  br label %nextNode8

nextNode8:                                        ; preds = %createNode7, %entry6
  %24 = load ptr, ptr %18, align 8
  %25 = getelementptr inbounds %BinaryTrieNode.3, ptr %24, i32 0, i32 0
  %26 = load ptr, ptr %25, align 8
  %27 = icmp eq ptr %26, null
  br i1 %27, label %createNode10, label %nextNode11

createNode10:                                     ; preds = %nextNode8
  %node12 = alloca %BinaryTrieNode.5, align 8
  %28 = getelementptr inbounds %BinaryTrieNode.5, ptr %node12, i32 0, i32 0
  store ptr null, ptr %28, align 8
  %29 = getelementptr inbounds %BinaryTrieNode.5, ptr %node12, i32 0, i32 1
  store ptr null, ptr %29, align 8
  %30 = getelementptr inbounds %BinaryTrieNode.5, ptr %node12, i32 0, i32 2
  store i1 false, ptr %30, align 1
  store ptr %node12, ptr %25, align 8
  br label %nextNode11

nextNode11:                                       ; preds = %createNode10, %nextNode8
  %31 = load ptr, ptr %25, align 8
  %32 = getelementptr inbounds %BinaryTrieNode.3, ptr %31, i32 0, i32 1
  %33 = load ptr, ptr %32, align 8
  %34 = icmp eq ptr %33, null
  br i1 %34, label %createNode13, label %nextNode14

createNode13:                                     ; preds = %nextNode11
  %node15 = alloca %BinaryTrieNode.6, align 8
  %35 = getelementptr inbounds %BinaryTrieNode.6, ptr %node15, i32 0, i32 0
  store ptr null, ptr %35, align 8
  %36 = getelementptr inbounds %BinaryTrieNode.6, ptr %node15, i32 0, i32 1
  store ptr null, ptr %36, align 8
  %37 = getelementptr inbounds %BinaryTrieNode.6, ptr %node15, i32 0, i32 2
  store i1 false, ptr %37, align 1
  store ptr %node15, ptr %32, align 8
  br label %nextNode14

nextNode14:                                       ; preds = %createNode13, %nextNode11
  %38 = load ptr, ptr %32, align 8
  %39 = getelementptr inbounds %BinaryTrieNode.3, ptr %38, i32 0, i32 2
  store i1 true, ptr %39, align 1
  ret void

entry16:                                          ; No predecessors!
  %40 = getelementptr inbounds %BinaryTrieNode.7, ptr %node, i32 0, i32 1
  %41 = load ptr, ptr %40, align 8
  %42 = icmp eq ptr %41, null
  br i1 %42, label %notFound, label %endCheck

notFound:                                         ; preds = %endCheck, %entry16
  ret i1 false

endCheck:                                         ; preds = %endCheck, %entry16
  %43 = getelementptr inbounds %BinaryTrieNode.7, ptr %41, i32 0, i32 0
  %44 = load ptr, ptr %43, align 8
  %45 = icmp eq ptr %44, null
  br i1 %45, label %notFound, label %endCheck
  %46 = getelementptr inbounds %BinaryTrieNode.7, ptr %44, i32 0, i32 2
  %47 = load i1, ptr %46, align 1
  br label %return

return:                                           ; preds = %endCheck
  %result = phi i1 [ false, %notFound ], [ %47, %endCheck ]
  ret i1 %result
  %48 = getelementptr inbounds %BinaryTrieNode.8, ptr %node, i32 0, i32 1
  %49 = load ptr, ptr %48, align 8
  %50 = icmp eq ptr %49, null
  br i1 %50, label %notFound17, label %endCheck18

notFound17:                                       ; preds = %endCheck18, %endCheck18, %return
  ret i1 false

endCheck18:                                       ; preds = %endCheck18, %endCheck18, %return
  %51 = getelementptr inbounds %BinaryTrieNode.8, ptr %49, i32 0, i32 0
  %52 = load ptr, ptr %51, align 8
  %53 = icmp eq ptr %52, null
  br i1 %53, label %notFound17, label %endCheck18
  %54 = getelementptr inbounds %BinaryTrieNode.8, ptr %52, i32 0, i32 1
  %55 = load ptr, ptr %54, align 8
  %56 = icmp eq ptr %55, null
  br i1 %56, label %notFound17, label %endCheck18
  %57 = getelementptr inbounds %BinaryTrieNode.8, ptr %55, i32 0, i32 2
  %58 = load i1, ptr %57, align 1
  br label %return19

return19:                                         ; preds = %endCheck18
  %result20 = phi i1 [ false, %notFound17 ], [ %58, %endCheck18 ]
  ret i1 %result20
  ret i1 true
}
