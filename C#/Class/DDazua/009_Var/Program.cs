using System;

namespace _009_Var
{
    class Program
    {
        // var numVar = 100;    // 에러 : 사용 불가(멤버 변수 사용 불가)

        /*static var Func() { }*/   // 에러 : 함수의 반환형을 사용 불가
        // static void Func(var a, var b) {} // 에러 : 함수의 파라미터로 사용 불가

        static void Main(string[] args)
        {
            var numVar = 100;
            var numFVar = 0.00043f;

            Console.WriteLine($"numVar : {numVar}");
            Console.WriteLine($"numFVar : {numFVar}");


            /*var numNull = null;*/     // null 초기값은 사용 불가.
        }
    }
}

            // var(암시적 형식) : 지역변수로만 사용 가능