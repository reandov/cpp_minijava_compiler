echo '
    +============================+
    |                            |
    | MINIJAVA WITH GALS AND C++ |
    |                            |
    +============================+
    ~> Evandro Rodrigues
    ~> Jordão Rodrigues
'

echo '  > Compiling source code...'
g++ main.cpp ./sources/*.cpp -o build/Main -Wno-deprecated
echo $'     ~ Source code compiled.\n'

echo $'  > Testing samples:\n'

echo $'     ~ Sample #1: BinarySearch!\n'
./build/Main language/samples/BinarySearch.txt > outputs/Output_BinarySearch.txt

echo $'     ~ Sample #2: BinaryTree!\n'
./build/Main language/samples/BinaryTree.txt > outputs/Output_BinaryTree.txt

echo $'     ~ Sample #3: BubbleSort!\n'
./build/Main language/samples/BubbleSort.txt > outputs/Output_BubbleSort.txt

echo $'     ~ Sample #4: Factorial!\n'
./build/Main language/samples/Factorial.txt > outputs/Output_Factorial.txt

echo $'     ~ Sample #5: LinearSearch!\n'
./build/Main language/samples/LinearSearch.txt > outputs/Output_LinearSearch.txt

echo $'     ~ Sample #6: LinkedList!\n'
./build/Main language/samples/LinkedList.txt > outputs/Output_LinkedList.txt

echo $'     ~ Sample #7: QuickSort!\n'
./build/Main language/samples/QuickSort.txt > outputs/Output_QuickSort.txt

echo $'     ~ Sample #8: TreeVisitor!\n'
./build/Main language/samples/TreeVisitor.txt > outputs/Output_TreeVisitor.txt

echo $'     ~ Sample #9: GenericSample!\n'
./build/Main language/samples/GenericSample.txt > outputs/Output_GenericSample.txt

echo $'  > Samples tested successfully! Please check them at outputs folder.\n'