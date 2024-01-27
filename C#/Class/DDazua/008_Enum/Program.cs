using System;

namespace _008_Enum
{
    enum COLOR_TYPE
    {
        WHITE,
        RED,
        BLUE,
        SIZE,
    }

    enum DAY : ushort
    {
        SUN, MON, THE, WED, TUE, FRI, SAT
    }

    enum NUMBER
    { 
        ONE = 1,
        TWO,
        THREE,
        FOUR,
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine($"COLOR_TYPE.WHITE : {COLOR_TYPE.WHITE}");
            Console.WriteLine($"COLOR_TYPE.BLUE : {COLOR_TYPE.BLUE}");

            Console.WriteLine($"COLOR_TYPE.WHITE : {(int)COLOR_TYPE.WHITE}");
            Console.WriteLine($"COLOR_TYPE.BLUE : {(int)COLOR_TYPE.BLUE}");

            // 변환
            {
                DAY day = DAY.SAT;

                Console.WriteLine($"day : {day}");
                Console.WriteLine($"DAY.SAT : {(short)DAY.SAT}");

                int total = (short)DAY.MON + (short)DAY.WED;
                Console.WriteLine($"total : {total}");
            }

            {
                Console.WriteLine($"NUMBER.ONE : {(int)NUMBER.ONE}");
                Console.WriteLine($"NUMBER.TWO : {(int)NUMBER.TWO}");
                Console.WriteLine($"NUMBER.THREE : {(int)NUMBER.THREE}");
                Console.WriteLine($"NUMBER.FOUR : {(int)NUMBER.FOUR}");

            }

        }
    }
}
