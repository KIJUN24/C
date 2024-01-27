using System;


namespace _006_bool
{
    internal class Program
    {
        static void Main(string[] args)
        {
            bool isEqual = (100 == 100);    // "==" 같다
            bool isResult = 100 < 1;

            Console.WriteLine($"isEqual : {isEqual}");
            Console.WriteLine($"isResult : {isResult}");

            bool isTrue = true;
            bool isFalse = false;

            Console.WriteLine($"isTrue : {isTrue}");
            Console.WriteLine($"isFalse : {isFalse}");

            isTrue = false;
            Console.WriteLine($"isTrue : {isTrue}");

        }
    }
}
