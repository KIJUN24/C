using System;


namespace _004_Float_Double
{
    internal class Program
    {
        static void Main(string[] args)
        {
            { 
                float fNum = 0.0001f;      // float 인지 double인지 구분하기 위해 f를 쓴다.
                double dNum = 12341234.9d;  // float 인지 double인지 구분하기 위해 d를 쓴다.

                Console.WriteLine($"fNum : {fNum}");
                Console.WriteLine($"dNum : {dNum}");
            }

            // 수치 접미사
            {
                Console.WriteLine("\n\n수치 접미사");

                float fNum = 0.00014F;          // float(F, f)
                double dNum = 56854.532151D;    // double(D, d)

                Console.WriteLine($"0.00014F : {fNum}");
                Console.WriteLine($"56854.532151D : {dNum}");
            }

            // 타입과 크기
            {
                Console.WriteLine("\n\n타입과 크기");

                float fNum = 513.531f;
                Console.WriteLine($"float Type : {fNum.GetType()} \tsizeof : {sizeof(float)} byte");

                double dNum = 54855215388.513251514D;
                Console.WriteLine($"double Type : {54855215388.513251514.GetType()} \tsizeof : {sizeof(double)} byte");
                // float에 리터럴 f를 쓰지 않는 경우 기본값은 double이다.
            }

            // 저장 가능 범위
            {
                Console.WriteLine("\n\n저장 가능 범위");

                float minFloat = float.MinValue;
                float maxFloat = float.MaxValue;
                Console.WriteLine($"float min : {minFloat}\t\t ~ max : {maxFloat}");

                double minDouble = double.MinValue;
                double maxDouble = double.MaxValue;
                Console.WriteLine($"double min : {minDouble}\t ~ max : {maxDouble}");
            }
        }
    }
}
