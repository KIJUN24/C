using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Remoting.Metadata.W3cXsd2001;
using System.Text;
using System.Threading.Tasks;

namespace _002_Variable
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 변수 선언에 기초 방법
            {
                int number;
                number = 10;
                Console.WriteLine("number : " + number);
            }

            // 변수 선언의 다양한 방법
            {
                int x;
                int a, b, c;
                int xx = 100; // 선언과 동시에 초기화
                int aa=1, bb=2, cc=3;   // 여러개를 할 수 있음
            }

        }
    }
}
