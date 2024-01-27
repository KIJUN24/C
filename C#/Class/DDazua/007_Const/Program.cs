using System;


namespace _007_Const
{
    internal class Program
    {
        static void Main(string[] args)
        {
            {
                int num = 100;
                Console.WriteLine($"num : {num}");
                num = 0;
                Console.WriteLine($"num : {num}"); ;

                const int CONST_NUM = 200;
                Console.WriteLine($"CONST_NUM : {CONST_NUM}"); ;
                //CONST_NUM = 0;  // 에러 : 상수이기떄문에 값의 변경 불가

                const double PI = 3.14;
                //PI = 4345;  // 에러
            }


        }
    }
}
