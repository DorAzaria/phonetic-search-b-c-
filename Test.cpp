#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;
#include <string>
using namespace std;

//1
TEST_CASE("b&f&p") {
    string text = "boyfriend waffle paparazzi";
            CHECK(find(text, "waFFle").compare("waffle") == 0);
            CHECK(find(text, "wafFle").compare("waffle") == 0);
            CHECK(find(text, "waFfle").compare("waffle") == 0);
            CHECK(find(text, "WAFFLE").compare("waffle") == 0);
            CHECK(find(text, "wabble").compare("waffle") == 0);
            CHECK(find(text, "waBBle").compare("waffle") == 0);
            CHECK(find(text, "wabBle").compare("waffle") == 0);
            CHECK(find(text, "waBble").compare("waffle") == 0);
            CHECK(find(text, "WABBLE").compare("waffle") == 0);
            CHECK(find(text, "wapple").compare("waffle") == 0);
            CHECK(find(text, "waPPle").compare("waffle") == 0);
            CHECK(find(text, "wapPle").compare("waffle") == 0);
            CHECK(find(text, "waPple").compare("waffle") == 0);
            CHECK(find(text, "WAPPLE").compare("waffle") == 0);

            CHECK(find(text, "PaParazzi").compare("paparazzi") == 0);
            CHECK(find(text, "paParazzi").compare("paparazzi") == 0);
            CHECK(find(text, "Paparazzi").compare("paparazzi") == 0);
            CHECK(find(text, "PAPARAZZI").compare("paparazzi") == 0);
            CHECK(find(text, "babarazzi").compare("paparazzi") == 0);
            CHECK(find(text, "Babarazzi").compare("paparazzi") == 0);
            CHECK(find(text, "BaBarazzi").compare("paparazzi") == 0);
            CHECK(find(text, "FaFarazzi").compare("paparazzi") == 0);
            CHECK(find(text, "Fafarazzi").compare("paparazzi") == 0);
            CHECK(find(text, "faFarazzi").compare("paparazzi") == 0);

            CHECK(find(text, "Boyfriend").compare("boyfriend") == 0);
            CHECK(find(text, "boyFriend").compare("boyfriend") == 0);
            CHECK(find(text, "BoyFriend").compare("boyfriend") == 0);
            CHECK(find(text, "BOYFRIEND").compare("boyfriend") == 0);
            CHECK(find(text, "Foyfriend").compare("boyfriend") == 0);
            CHECK(find(text, "FoyFriend").compare("boyfriend") == 0);
            CHECK(find(text, "foyFriend").compare("boyfriend") == 0);
            CHECK(find(text, "foyfriend").compare("boyfriend") == 0);
            CHECK(find(text, "FOYFRIEND").compare("boyfriend") == 0);
            CHECK(find(text, "Boybriend").compare("boyfriend") == 0);
            CHECK(find(text, "BoyBriend").compare("boyfriend") == 0);
            CHECK(find(text, "boyBriend").compare("boyfriend") == 0);
            CHECK(find(text, "boybriend").compare("boyfriend") == 0);
            CHECK(find(text, "BOYBRIEND").compare("boyfriend") == 0);
            CHECK(find(text, "Poypriend").compare("boyfriend") == 0);
            CHECK(find(text, "PoyPriend").compare("boyfriend") == 0);
            CHECK(find(text, "poyPriend").compare("boyfriend") == 0);
            CHECK(find(text, "poypriend").compare("boyfriend") == 0);
            CHECK(find(text, "POYPRIEND").compare("boyfriend") == 0);
            CHECK(find(text, "Foybriend").compare("boyfriend") == 0);
            CHECK(find(text, "FoyBriend").compare("boyfriend") == 0);
            CHECK(find(text, "foyBriend").compare("boyfriend") == 0);
            CHECK(find(text, "foybriend").compare("boyfriend") == 0);
            CHECK(find(text, "FOYBRIEND").compare("boyfriend") == 0);
            CHECK(find(text, "Poyfriend").compare("boyfriend") == 0);
            CHECK(find(text, "PoyFriend").compare("boyfriend") == 0);
            CHECK(find(text, "poyfriend").compare("boyfriend") == 0);
            CHECK(find(text, "poyFriend").compare("boyfriend") == 0);
            CHECK(find(text, "POYFRIEND").compare("boyfriend") == 0);
            CHECK(find(text, "Boypriend").compare("boyfriend") == 0);
            CHECK(find(text, "BoyPriend").compare("boyfriend") == 0);
            CHECK(find(text, "boypriend").compare("boyfriend") == 0);
            CHECK(find(text, "boyPriend").compare("boyfriend") == 0);
            CHECK(find(text, "BOYPRIEND").compare("boyfriend") == 0);
            CHECK(find(text, "Poybriend").compare("boyfriend") == 0);
            CHECK(find(text, "PoyBriend").compare("boyfriend") == 0);
            CHECK(find(text, "poybriend").compare("boyfriend") == 0);
            CHECK(find(text, "poyBriend").compare("boyfriend") == 0);
            CHECK(find(text, "POYBRIEND").compare("boyfriend") == 0);
}

//2
TEST_CASE("c&k&q") {
    string text = "cake queen";
            CHECK(find(text, "qake").compare("cake") == 0);
            CHECK(find(text, "kake").compare("cake") == 0);
            CHECK(find(text, "caqe").compare("cake") == 0);
            CHECK(find(text, "cace").compare("cake") == 0);
            CHECK(find(text, "Cake").compare("cake") == 0);
            CHECK(find(text, "Cake").compare("cake") == 0);
            CHECK(find(text, "CAKE").compare("cake") == 0);
            CHECK(find(text, "kace").compare("cake") == 0);
            CHECK(find(text, "KACE").compare("cake") == 0);
            CHECK(find(text, "Queen").compare("queen") == 0);
            CHECK(find(text, "QUEEN").compare("queen") == 0);
            CHECK(find(text, "kueen").compare("queen") == 0);
            CHECK(find(text, "Kueen").compare("queen") == 0);
            CHECK(find(text, "KUEEN").compare("queen") == 0);
            CHECK(find(text, "cueen").compare("queen") == 0);
            CHECK(find(text, "Cueen").compare("queen") == 0);
            CHECK(find(text, "CUEEN").compare("queen") == 0);
}

//3
TEST_CASE("v&w") {
    string text = "valery was very weird";
            CHECK(find(text, "Valery").compare("valery") == 0);
            CHECK(find(text, "Was").compare("was") == 0);
            CHECK(find(text, "Very").compare("very") == 0);
            CHECK(find(text, "Weird").compare("weird") == 0);
            CHECK(find(text, "Walery").compare("valery") == 0);
            CHECK(find(text, "walery").compare("valery") == 0);
            CHECK(find(text, "Vas").compare("was") == 0);
            CHECK(find(text, "vas").compare("was") == 0);
            CHECK(find(text, "Wery").compare("very") == 0);
            CHECK(find(text, "wery").compare("very") == 0);
            CHECK(find(text, "Veird").compare("weird") == 0);
            CHECK(find(text, "veird").compare("weird") == 0);
}

//4
TEST_CASE("g&j") {
    string text = "gaga jag";
            CHECK(find(text, "Gaga").compare("gaga") == 0);
            CHECK(find(text, "GaGa").compare("gaga") == 0);
            CHECK(find(text, "gaGa").compare("gaga") == 0);
            CHECK(find(text, "GAGA").compare("gaga") == 0);
            CHECK(find(text, "jaga").compare("gaga") == 0);
            CHECK(find(text, "Jaga").compare("gaga") == 0);
            CHECK(find(text, "JaGa").compare("gaga") == 0);
            CHECK(find(text, "jaGa").compare("gaga") == 0);
            CHECK(find(text, "JAGA").compare("gaga") == 0);
            CHECK(find(text, "gaja").compare("gaga") == 0);
            CHECK(find(text, "Gaja").compare("gaga") == 0);
            CHECK(find(text, "GaJa").compare("gaga") == 0);
            CHECK(find(text, "gaJa").compare("gaga") == 0);
            CHECK(find(text, "GAJA").compare("gaga") == 0);
            CHECK(find(text, "jaja").compare("gaga") == 0);
            CHECK(find(text, "jaJa").compare("gaga") == 0);
            CHECK(find(text, "Jaja").compare("gaga") == 0);
            CHECK(find(text, "JAJA").compare("gaga") == 0);
            CHECK(find(text, "Jag").compare("jag") == 0);
            CHECK(find(text, "JaG").compare("jag") == 0);
            CHECK(find(text, "jaG").compare("jag") == 0);
            CHECK(find(text, "JAG").compare("jag") == 0);
            CHECK(find(text, "gaj").compare("jag") == 0);
            CHECK(find(text, "Gaj").compare("jag") == 0);
            CHECK(find(text, "GaJ").compare("jag") == 0);
            CHECK(find(text, "gaJ").compare("jag") == 0);
            CHECK(find(text, "GAJ").compare("jag") == 0);
}

//5
TEST_CASE("s&z") {
    string text = "sprite zero";
            CHECK(find(text, "Sprite").compare("sprite") == 0);
            CHECK(find(text, "SPRITE").compare("sprite") == 0);
            CHECK(find(text, "zprite").compare("sprite") == 0);
            CHECK(find(text, "Zprite").compare("sprite") == 0);
            CHECK(find(text, "ZPRITE").compare("sprite") == 0);
            CHECK(find(text, "Zero").compare("zero") == 0);
            CHECK(find(text, "ZERO").compare("zero") == 0);
            CHECK(find(text, "sero").compare("zero") == 0);
            CHECK(find(text, "Sero").compare("zero") == 0);
            CHECK(find(text, "SERO").compare("zero") == 0);
}

//6
TEST_CASE("d&t") {
    string text = "dont tell";
            CHECK(find(text, "Dont").compare("dont") == 0);
            CHECK(find(text, "DonT").compare("dont") == 0);
            CHECK(find(text, "DONT").compare("dont") == 0);
            CHECK(find(text, "tont").compare("dont") == 0);
            CHECK(find(text, "Tont").compare("dont") == 0);
            CHECK(find(text, "TonT").compare("dont") == 0);
            CHECK(find(text, "TONT").compare("dont") == 0);
            CHECK(find(text, "tond").compare("dont") == 0);
            CHECK(find(text, "Tond").compare("dont") == 0);
            CHECK(find(text, "TonD").compare("dont") == 0);
            CHECK(find(text, "TOND").compare("dont") == 0);
            CHECK(find(text, "dond").compare("dont") == 0);
            CHECK(find(text, "Dond").compare("dont") == 0);
            CHECK(find(text, "DonD").compare("dont") == 0);
            CHECK(find(text, "DOND").compare("dont") == 0);
            CHECK(find(text, "Tell").compare("tell") == 0);
            CHECK(find(text, "TELL").compare("tell") == 0);
            CHECK(find(text, "dell").compare("tell") == 0);
            CHECK(find(text, "Dell").compare("tell") == 0);
            CHECK(find(text, "DELL").compare("tell") == 0);
}

//7
TEST_CASE("o&u") {
    string text = "windows linux";
            CHECK(find(text, "windOws").compare("windows") == 0);
            CHECK(find(text, "WINDOWS").compare("windows") == 0);
            CHECK(find(text, "winduws").compare("windows") == 0);
            CHECK(find(text, "windUws").compare("windows") == 0);
            CHECK(find(text, "WINDUWS").compare("windows") == 0);
            CHECK(find(text, "linUx").compare("linux") == 0);
            CHECK(find(text, "LINUX").compare("linux") == 0);
            CHECK(find(text, "linox").compare("linux") == 0);
            CHECK(find(text, "linOx").compare("linux") == 0);
            CHECK(find(text, "LINOX").compare("linux") == 0);
}

//8
TEST_CASE("i&y") {
    string text = "italy is dying";
            CHECK(find(text, "Italy").compare("italy") == 0);
            CHECK(find(text, "ITALY").compare("italy") == 0);
            CHECK(find(text, "itali").compare("italy") == 0);
            CHECK(find(text, "Itali").compare("italy") == 0);
            CHECK(find(text, "ITALI").compare("italy") == 0);
            CHECK(find(text, "ytali").compare("italy") == 0);
            CHECK(find(text, "Ytali").compare("italy") == 0);
            CHECK(find(text, "YTALI").compare("italy") == 0);
            CHECK(find(text, "ytaly").compare("italy") == 0);
            CHECK(find(text, "Ytaly").compare("italy") == 0);
            CHECK(find(text, "YTALY").compare("italy") == 0);
            CHECK(find(text, "Is").compare("is") == 0);
            CHECK(find(text, "Is").compare("is") == 0);
            CHECK(find(text, "IS").compare("is") == 0);
            CHECK(find(text, "Ys").compare("is") == 0);
            CHECK(find(text, "YS").compare("is") == 0);
            CHECK(find(text, "dYing").compare("dying") == 0);
            CHECK(find(text, "dYIng").compare("dying") == 0);
            CHECK(find(text, "DYING").compare("dying") == 0);
            CHECK(find(text, "diyng").compare("dying") == 0);
            CHECK(find(text, "dIyng").compare("dying") == 0);
            CHECK(find(text, "DIYNG").compare("dying") == 0);
            CHECK(find(text, "diing").compare("dying") == 0);
            CHECK(find(text, "DIING").compare("dying") == 0);
            CHECK(find(text, "dyynG").compare("dying") == 0);
            CHECK(find(text, "DYYNG").compare("dying") == 0);
}

