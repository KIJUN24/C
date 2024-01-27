using System;

namespace _005_decimal
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 수치 접미사
            {
                Console.WriteLine("\n\n수치 접미사");

                decimal dcNum = 321321321321.043M;  // 수치 접미사(M,m)
                Console.WriteLine($"dcNum : {dcNum}");
            }

            // 타입과 크기
            {
                Console.WriteLine("\n\n타입과 크기");

                decimal dcNum = 321321321321.043M;

                Console.WriteLine($"decimal type : {dcNum.GetType()}\tsize : {sizeof(decimal)} byte");
            }

            // 저장 가능 범위
            {
                Console.WriteLine("\n\n저장 가능 범위");

                decimal mindecimal = decimal.MinValue;
                decimal maxdecimal = decimal.MaxValue;

                Console.WriteLine($"decimal min : {mindecimal}\t ~ max : {maxdecimal}");
            }
        }
    }
}
