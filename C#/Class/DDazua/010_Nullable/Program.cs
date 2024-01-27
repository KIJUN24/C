using System;


namespace _010_Nullable
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int? num = 100;
            double? dNum = 53153.5135d;

            Console.WriteLine($"num : {num}");
            Console.WriteLine($"num : {num.Value}");
            Console.WriteLine($"num : {num.HasValue}");
            Console.WriteLine($"num type : {num.GetType()}");
            Console.WriteLine();
            Console.WriteLine($"dNum : {dNum}");
            Console.WriteLine($"dNum : {dNum.Value}");
            Console.WriteLine($"dNum type : {dNum.HasValue}");
            Console.WriteLine($"dNum type : {dNum.GetType()}");

            num = null;
            Console.WriteLine($"num : {num.GetValueOrDefault()}");  // 디폴트 값을 가져오는 함수
                                                                    // num에 null을 넣어 디폴트 값인 0이 출력된다.
            Console.WriteLine($"num : {num.HasValue}");


            if (num.HasValue)        // num이 null 값인지 판단하는 if문
            {
                Console.WriteLine($"num : {num.GetType()}");   // 결과값으로 나오지 않는 것으로 보아 num에는 null값이 들어가 있음
            }


            // 변환
            {
                int? nullNum = 105;
                int numCast = (int)nullNum; // 명시적 형변환을 해줘야 한다.
                Console.WriteLine($"nullNum : {nullNum}");
                Console.WriteLine($"numCast : {numCast}");

            }

        }
    }
}
