#include"Header.h"
using namespace std;

int main()
{
    int maMau = 1;
    hideMouse();
    resizeConsole(150, 40);
    Sleep(1000);

    while (true)
    {
        hideMouse();
        resizeConsole(150, 40);

        //H
        maMau++;
        setColor(maMau);
        gotoXY(11, 1);
        cout << "__      __";
        gotoXY(10, 2);
        cout << "/  /    /  /";
        gotoXY(9, 3);
        cout << "/  /    /  /";
        gotoXY(8, 4);
        cout << "/  /____/  /";
        gotoXY(7, 5);
        cout << "/  _____   /";
        gotoXY(6, 6);
        cout << "/  /    /  /";
        gotoXY(5, 7);
        cout << "/  /    /  /";
        gotoXY(4, 8);
        cout << "/__/    /__/";

        //A
        maMau++;
        setColor(maMau);
        gotoXY(24, 1);
        cout << "______";
        gotoXY(23, 2);
        cout << "/  __  |";
        gotoXY(22, 3);
        cout << "/  / |  |";
        gotoXY(21, 4);
        cout << "/  /__|  |";
        gotoXY(20, 5);
        cout << "/  ____   |";
        gotoXY(19, 6);
        cout << "/  /    |  |";
        gotoXY(18, 7);
        cout << "/  /     |  |";
        gotoXY(17, 8);
        cout << "/__/      |__|";

        //P
        maMau++;
        setColor(maMau);
        gotoXY(32, 1);
        cout << " ________";
        gotoXY(32, 2);
        cout << "|  ___   |";
        gotoXY(32, 3);
        cout << "|  |  |  |";
        gotoXY(32, 4);
        cout << "|  |__/  /";
        gotoXY(32, 5);
        cout << "|  _____/";
        gotoXY(32, 6);
        cout << "|  |";
        gotoXY(32, 7);
        cout << "|  |";
        gotoXY(32, 8);
        cout << "|__|";

        //P
        maMau++;
        setColor(maMau);
        gotoXY(42, 1);
        cout << " ________";
        gotoXY(42, 2);
        cout << "|  ___   |";
        gotoXY(42, 3);
        cout << "|  |  |  |";
        gotoXY(42, 4);
        cout << "|  |__/  /";
        gotoXY(42, 5);
        cout << "|  _____/";
        gotoXY(42, 6);
        cout << "|  |";
        gotoXY(42, 7);
        cout << "|  |";
        gotoXY(42, 8);
        cout << "|__|";

        //Y
        maMau++;
        setColor(maMau);
        gotoXY(52, 1);
        cout << " __   __";
        gotoXY(52, 2);
        cout << " | | /  /";
        gotoXY(52, 3);
        cout << " | |/  /";
        gotoXY(52, 4);
        cout << " |    /";
        gotoXY(52, 5);
        cout << " |   /";
        gotoXY(53, 6);
        cout << "/  /";
        gotoXY(52, 7);
        cout << "/  /";
        gotoXY(51, 8);
        cout << "/__/";

        //B
        maMau++;
        setColor(maMau);
        gotoXY(13, 11);
        cout << "______";
        gotoXY(12, 12);
        cout << "/  __  |";
        gotoXY(11, 13);
        cout << "/  /  | |";
        gotoXY(10, 14);
        cout << "/  /   / /";
        gotoXY(9, 15);
        cout << "/  /___/ /";
        gotoXY(8, 16);
        cout << "/  _____  |";
        gotoXY(7, 17);
        cout << "/  /    /  /";
        gotoXY(6, 18);
        cout << "/  /    /  /";
        gotoXY(5, 19);
        cout << "/  /____/  /";
        gotoXY(4, 20);
        cout << "/__________/";

        //I
        maMau++;
        setColor(maMau);
        gotoXY(25, 11);
        cout << " _________";
        gotoXY(24, 12);
        cout << " /__   ___/";
        gotoXY(23, 13);
        cout << "    /  /";
        gotoXY(22, 14);
        cout << "    /  /";
        gotoXY(21, 15);
        cout << "    /  /";
        gotoXY(20, 16);
        cout << "    /  /";
        gotoXY(19, 17);
        cout << "    /  /";
        gotoXY(18, 18);
        cout << "    /  /";
        gotoXY(17, 19);
        cout << " ___/  /__";
        gotoXY(16, 20);
        cout << " /________/";

        //R
        maMau++;
        setColor(maMau);
        gotoXY(38, 11);
        cout << "________";
        gotoXY(37, 12);
        cout << "/  ___   |";
        gotoXY(36, 13);
        cout << "/  /   |  |";
        gotoXY(35, 14);
        cout << "/  /   /  /";
        gotoXY(34, 15);
        cout << "/  /___/  /";
        gotoXY(33, 16);
        cout << "/   __    /";
        gotoXY(32, 17);
        cout << "/  /  |   /";
        gotoXY(31, 18);
        cout << "/  /   |  |";
        gotoXY(30, 19);
        cout << "/  /    |  |";
        gotoXY(29, 20);
        cout << "/__/     |__|";

        //T
        maMau++;
        setColor(maMau);
        gotoXY(51, 11);
        cout << "_____________";
        gotoXY(50, 12);
        cout << "/            /";
        gotoXY(49, 13);
        cout << "/____    ____/";
        gotoXY(53, 14);
        cout << "/   /";
        gotoXY(52, 15);
        cout << "/   /";
        gotoXY(51, 16);
        cout << "/   /";
        gotoXY(50, 17);
        cout << "/   /";
        gotoXY(49, 18);
        cout << "/   /";
        gotoXY(48, 19);
        cout << "/   /";
        gotoXY(47, 20);
        cout << "/___/";

        //H
        maMau++;
        setColor(maMau);
        gotoXY(66, 11);
        cout << "__      __";
        gotoXY(65, 12);
        cout << "/  /    /  /";
        gotoXY(64, 13);
        cout << "/  /    /  /";
        gotoXY(63, 14);
        cout << "/  /    /  /";
        gotoXY(62, 15);
        cout << "/  /____/  /";
        gotoXY(61, 16);
        cout << "/  _____   /";
        gotoXY(60, 17);
        cout << "/  /    /  /";
        gotoXY(59, 18);
        cout << "/  /    /  /";
        gotoXY(58, 19);
        cout << "/  /    /  /";
        gotoXY(57, 20);
        cout << "/__/    /__/";

        //D
        maMau++;
        setColor(maMau);
        gotoXY(80, 11);
        cout << "__________";
        gotoXY(79, 12);
        cout << "/          |";
        gotoXY(78, 13);
        cout << "/   _____   |";
        gotoXY(77, 14);
        cout << "/  /      |  |";
        gotoXY(76, 15);
        cout << "/  /       /  |";
        gotoXY(75, 16);
        cout << "/  /      _/ _/";
        gotoXY(74, 17);
        cout << "/  /    _/  _/";
        gotoXY(73, 18);
        cout << "/  /____/  _/";
        gotoXY(72, 19);
        cout << "/         _/";
        gotoXY(71, 20);
        cout << "/_________/";

        //A
        maMau++;
        setColor(maMau);
        gotoXY(95, 11);
        cout << "______";
        gotoXY(94, 12);
        cout << "/      |";
        gotoXY(93, 13);
        cout << "/   /|  |";
        gotoXY(92, 14);
        cout << "/   / |  |";
        gotoXY(91, 15);
        cout << "/   /__|  |";
        gotoXY(90, 16);
        cout << "/          |";
        gotoXY(89, 17);
        cout << "/   _____   |";
        gotoXY(88, 18);
        cout << "/   /     |  |";
        gotoXY(87, 19);
        cout << "/   /      |  |";
        gotoXY(86, 20);
        cout << "/___/       |__|";

        //Y
        maMau++;
        setColor(maMau);
        gotoXY(108, 11);
        cout << "_    __";
        gotoXY(107, 12);
        cout << "| |  /  /";
        gotoXY(107, 13);
        cout << "| | /  /";
        gotoXY(107, 14);
        cout << "| |/  /";
        gotoXY(107, 15);
        cout << "|    /";
        gotoXY(107, 16);
        cout << "|   /";
        gotoXY(107, 17);
        cout << "/  /";
        gotoXY(106, 18);
        cout << "/  /";
        gotoXY(105, 19);
        cout << "/  /";
        gotoXY(104, 20);
        cout << "/__/";

        //T
        maMau++;
        setColor(maMau);
        gotoXY(14, 23);
        cout << "_____________";
        gotoXY(13, 24);
        cout << "/            /";
        gotoXY(12, 25);
        cout << "/____    ____/";
        gotoXY(16, 26);
        cout << "/   /";
        gotoXY(15, 27);
        cout << "/   /";
        gotoXY(14, 28);
        cout << "/   /";
        gotoXY(13, 29);
        cout << "/   /";
        gotoXY(12, 30);
        cout << "/   /";
        gotoXY(11, 31);
        cout << "/   /";
        gotoXY(10, 32);
        cout << "/___/";

        //R
        setColor(maMau);
        gotoXY(28, 23);
        cout << "________";
        gotoXY(27, 24);
        cout << "/  ___   |";
        gotoXY(26, 25);
        cout << "/  /   |  |";
        gotoXY(25, 26);
        cout << "/  /   /  /";
        gotoXY(24, 27);
        cout << "/  /___/  /";
        gotoXY(23, 28);
        cout << "/   __    /";
        gotoXY(22, 29);
        cout << "/  /  |   /";
        gotoXY(21, 30);
        cout << "/  /   |  |";
        gotoXY(20, 31);
        cout << "/  /    |  |";
        gotoXY(19, 32);
        cout << "/__/     |__|";

        gotoXY(127, 39);
        setColor(1);
        cout << "DESIGN BY HO TAN DAT";

        //A
        setColor(maMau);
        gotoXY(43, 23);
        cout << "______";
        gotoXY(42, 24);
        cout << "/      |";
        gotoXY(41, 25);
        cout << "/   /|  |";
        gotoXY(40, 26);
        cout << "/   / |  |";
        gotoXY(39, 27);
        cout << "/   /__|  |";
        gotoXY(38, 28);
        cout << "/          |";
        gotoXY(37, 29);
        cout << "/   _____   |";
        gotoXY(36, 30);
        cout << "/   /     |  |";
        gotoXY(35, 31);
        cout << "/   /      |  |";
        gotoXY(34, 32);
        cout << "/___/       |__|";

        //N
        setColor(maMau);
        gotoXY(61, 23);
        cout << "__        __";
        gotoXY(60, 24);
        cout << "/  |      /  /";
        gotoXY(59, 25);
        cout << "/   |     /  /";
        gotoXY(58, 26);
        cout << "/ /| |    /  /";
        gotoXY(57, 27);
        cout << "/ / | |   /  /";
        gotoXY(56, 28);
        cout << "/ /  | |  /  /";
        gotoXY(55, 29);
        cout << "/ /   | | /  /";
        gotoXY(54, 30);
        cout << "/ /    | |/  /";
        gotoXY(53, 31);
        cout << "/ /     |    /";
        gotoXY(52, 32);
        cout << "/_/      |___/";

        //G
        setColor(maMau);
        gotoXY(77, 23);
        cout << "__________";
        gotoXY(76, 24);
        cout << "/  ________|";
        gotoXY(75, 25);
        cout << "/  /";
        gotoXY(74, 26);
        cout << "/  /";
        gotoXY(73, 27);
        cout << "/  /   _______";
        gotoXY(72, 28);
        cout << "/  /   |___   /";
        gotoXY(71, 29);
        cout << "/  /       /  /";
        gotoXY(70, 30);
        cout << "/  /       /  /";
        gotoXY(69, 31);
        cout << "/  /_______/  /";
        gotoXY(68, 32);
        cout << "/_____________/";
        
        Sleep(700);
    }
}