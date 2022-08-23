#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int atno;
    float atmass;
    char *name;
    char *sym;
    char block;
    struct node *next;
};

int searchbyname(struct node *ptr, char *ele)
{
    // int flag1 = 0;

    while (ptr != NULL)
    {
        if (strcmp(ele, ptr->name) == 0)
        {
            printf("\033[1;36m");
            printf("\n****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************\n\n");
            printf("\033[0m");

            printf("\033[1;35m");
            printf("                                                                                   \033[1;32mElement       : \033[1;35m%s\n\033[1;0m                                                                                   \033[1;32mAtomic Number : \033[1;35m%d\n\033[1;0m                                                                                   \033[1;32mAtomic Mass   : \033[1;35m%.4f\n\033[1;0m                                                                                   \033[1;32mSymbole       : \033[1;35m%s\n\033[1;0m                                                                                   \033[1;32mBlock         : \033[1;35m%c\n\033[1;0m ", ptr->name, ptr->atno, ptr->atmass, ptr->sym, ptr->block);
            printf("\033[0m");

            printf("\033[1;36m");
            printf("\n****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************\n\n");
            printf("\033[0m");

            // flag1 = 1;
            return 1;
        }

        ptr = ptr->next;
    }
    return 0;
} // search by name

int searchbysym(struct node *ptr, char *ele)
{
    // int flag2 = 0;

    while (ptr != NULL)
    {
        if (strcmp(ele, ptr->sym) == 0)
        {
            printf("\033[1;36m");
            printf("\n****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************\n\n");
            printf("\033[0m");

            printf("\033[1;35m");
            printf("                                                                                   \033[1;32mElement       : \033[1;35m%s\n\033[1;0m                                                                                   \033[1;32mAtomic Number : \033[1;35m%d\n\033[1;0m                                                                                   \033[1;32mAtomic Mass   : \033[1;35m%.4f\n\033[1;0m                                                                                   \033[1;32mSymbole       : \033[1;35m%s\n\033[1;0m                                                                                   \033[1;32mBlock         : \033[1;35m%c\n\033[1;0m ", ptr->name, ptr->atno, ptr->atmass, ptr->sym, ptr->block);
            printf("\033[0m");

            printf("\033[1;36m");
            printf("\n****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************\n\n");
            printf("\033[0m");
            // flag2 = 1;
            return 1;
        }
        ptr = ptr->next;
    }
    return 0;
} // serach by symbole

int searchbyatno(struct node *ptr, int atn)
{
    // int flag3 = 0;
    while (ptr != NULL)
    {
        if (ptr->atno == atn)
        {
            printf("\033[1;36m");
            printf("\n****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************\n\n");
            printf("\033[0m");

            printf("\033[1;35m");
            printf("                                                                                   \033[1;32mElement       : \033[1;35m%s\n\033[1;0m                                                                                   \033[1;32mAtomic Number : \033[1;35m%d\n\033[1;0m                                                                                   \033[1;32mAtomic Mass   : \033[1;35m%.4f\n\033[1;0m                                                                                   \033[1;32mSymbole       : \033[1;35m%s\n\033[1;0m                                                                                   \033[1;32mBlock         : \033[1;35m%c\n\033[1;0m ", ptr->name, ptr->atno, ptr->atmass, ptr->sym, ptr->block);
            printf("\033[0m");

            printf("\033[1;36m");
            printf("\n****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************\n\n");
            printf("\033[0m");
            // 4flag3 = 1;
            return 1;
        }
        ptr = ptr->next;
    }
    return 0;
}

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("the atno  is %d\n", ptr->atno);
        ptr = ptr->next;
    }
}

struct node *createnewelement(struct node *ptr)
{

    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    struct node *ptr5;
    ptr5 = ptr;
    while (ptr5->next != NULL)
    {
        ptr5 = ptr5->next;
    }
    ptr5->next = new;
    printf("\033[1;36m");

    // atomic number insert
    printf("enter the atomic number of element\nps* case sensitive\n");
    int atn1;
    scanf("%d", &atn1);
    new->atno = atn1;

    // nameinsert
    printf("enter the name of element\nps* case sensitive\n");
    char elementname1[10];
    scanf("%s", &elementname1);
    new->name = elementname1;

    // symbolinsert
    printf("enter the symbole of element\nps* case sensitive\n");
    char elementsym1[10];
    scanf("%s", &elementsym1);
    new->sym = elementsym1;

    // atomic mass
    printf("enter the atomic mass of element\nps* case sensitive\n");
    int atma1;
    scanf("%.4f", &atma1);
    new->atmass = atma1;

    // blockinsert
    printf("enter the symbole of element\nps* case sensitive\n");
    char elementblock1;
    scanf("%c", &elementblock1);
    new->block = elementblock1;
    printf("\033[0m");
    new->next = NULL;

    return ptr;
} // creating new node

struct node *deleteelement(struct node *ptr)
{
    struct node *p = ptr;
    struct node *q = ptr->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    printf("\033[1;31m");
    printf("\n\n                                                                                   The LAST ELEMENT HAS BEEN DELETED\n\n");
    printf("\033[0m");
    return ptr;
} // delete last node

void ppt()
{
    printf("\033[1;36m");
    printf("\n\n\n\n                                                                                  ----------------\n");
    printf("\033[0m");

    printf("\033[1;35m");
    printf("                                                                                   PERIODIC TABLE\n");
    printf("\033[0m");

    printf("\033[1;36m");
    printf("                                                                                  ----------------\n\n");
    printf("\033[0m");

    printf("		1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18\n\n1		\033[1;32mH																	\033[1;33mHe\033[1;0m\n\n2		\033[1;31mLi	Be											\033[1;35mB	C	N	O	F	\033[1;33mNe\033[1;0m\n\n3		\033[1;31mNa	Mg\033[1;0m 											\033[1;35mAl	Si	P	S	Cl	\033[1;33mAr\033[1;0m\n\n4		\033[1;31mK	Ca\033[1;0m 	\033[1;36mSc	Ti	V	CR	Mn	Fe	Co	Ni	Cu	Zn	\033[1;35mGa	Ge	As	Se	Br	\033[1;33mKr\033[1;0m\n\n5		\033[1;31mRb	Sr\033[1;0m 	\033[1;36mY	Zr	Nb	Mo	Tc	Ru	Rh	Pd	Ag	Cd	\033[1;35mIn	Sn	SB	Te	I	\033[1;33mXe\033[1;0m\n\n6		\033[1;31mCs	Ba\033[1;0m 	\033[1;32m[La]\033[1;0m	\033[1;36mHf	Ta	W	Re	Os	Ir	Pt	Au	Hg	\033[1;35mTi	Pb	Bi	Po	At	\033[1;33mRn\033[1;0m\n\n7		\033[1;31mFr	Ra\033[1;0m 	\033[1;34m[Ac]\033[1;0m	\033[1;36mRf	DB	Sg	Bh	Hs	Mt	Ds	Rg	Cn	\033[1;35mNh	Fi	Mc	LV	Ts	\033[1;33mOg\033[1;0m\n\n\n\n8				\033[1;32mLa	Ce	Pr	Nd	Pm	Sm	Eu	Gd	Tb	Dy	Ho	Er	Tm	Yb	Lu\033[1;0m\n\n9				\033[1;34mAc	Th	Pa	U	Np	Pu	Am	Cm	Bk	Cf	Es	Fm	Md	No	Lr\n\n\n\n");
} // printing whole periodic table

int main()
{
    struct node *head;
    struct node *tail = NULL;

    // Element 1
    struct node *e1;
    e1 = (struct node *)malloc(sizeof(struct node));
    e1->atno = 1;
    e1->atmass = 1.00784;
    e1->name = "hydrogen";
    e1->sym = "H";
    e1->block = 's';

    // Element 2
    struct node *e2;
    e2 = (struct node *)malloc(sizeof(struct node));
    e2->atno = 2;
    e2->atmass = 4.0026;
    e2->name = "helium";
    e2->sym = "He";
    e2->block = 's';

    // Element 3
    struct node *e3;
    e3 = (struct node *)malloc(sizeof(struct node));
    e3->atno = 3;
    e3->atmass = 6.941;
    e3->name = "lithium";
    e3->sym = "Li";
    e3->block = 's';

    // Element 4
    struct node *e4;
    e4 = (struct node *)malloc(sizeof(struct node));
    e4->atno = 4;
    e4->atmass = 9.0121;
    e4->name = "beryllium";
    e4->sym = "Be";
    e4->block = 's';

    // Element 5
    struct node *e5;
    e5 = (struct node *)malloc(sizeof(struct node));
    e5->atno = 5;
    e5->atmass = 10.811;
    e5->name = "boron";
    e5->sym = "B";
    e5->block = 'p';

    // Element 6
    struct node *e6;
    e6 = (struct node *)malloc(sizeof(struct node));
    e6->atno = 6;
    e6->atmass = 12.0107;
    e6->name = "carbon";
    e6->sym = "C";
    e6->block = 'p';

    // Element 7
    struct node *e7;
    e7 = (struct node *)malloc(sizeof(struct node));
    e7->atno = 7;
    e7->atmass = 14.0067;
    e7->name = "nitrogen";
    e7->sym = "N";
    e7->block = 'p';

    // Element 8
    struct node *e8;
    e8 = (struct node *)malloc(sizeof(struct node));
    e8->atno = 8;
    e8->atmass = 15.9994;
    e8->name = "oxygen";
    e8->sym = "O";
    e8->block = 'p';

    // Element 9
    struct node *e9;
    e9 = (struct node *)malloc(sizeof(struct node));
    e9->atno = 9;
    e9->atmass = 18.9984;
    e9->name = "fluorine";
    e9->sym = "F";
    e9->block = 'p';

    // Element 10
    struct node *e10;
    e10 = (struct node *)malloc(sizeof(struct node));
    e10->atno = 10;
    e10->atmass = 20.1797;
    e10->name = "neon";
    e10->sym = "Ne";
    e10->block = 'p';

    // Element 11
    struct node *e11;
    e11 = (struct node *)malloc(sizeof(struct node));
    e11->atno = 11;
    e11->atmass = 22.9897;
    e11->name = "sodium";
    e11->sym = "Na";
    e11->block = 's';

    // Element 12
    struct node *e12;
    e12 = (struct node *)malloc(sizeof(struct node));
    e12->atno = 12;
    e12->atmass = 24.3050;
    e12->name = "magnesium";
    e12->sym = "Mg";
    e12->block = 's';

    // Element 13
    struct node *e13;
    e13 = (struct node *)malloc(sizeof(struct node));
    e13->atno = 13;
    e13->atmass = 26.9815;
    e13->name = "aluminium";
    e13->sym = "Al";
    e13->block = 'p';

    // Element 14
    struct node *e14;
    e14 = (struct node *)malloc(sizeof(struct node));
    e14->atno = 14;
    e14->atmass = 28.0855;
    e14->name = "silicon";
    e14->sym = "Si";
    e14->block = 'p';

    // Element 15
    struct node *e15;
    e15 = (struct node *)malloc(sizeof(struct node));
    e15->atno = 15;
    e15->atmass = 30.9737;
    e15->name = "phosphorus";
    e15->sym = "P";
    e15->block = 'p';

    // Element 16
    struct node *e16;
    e16 = (struct node *)malloc(sizeof(struct node));
    e16->atno = 16;
    e16->atmass = 32.065;
    e16->name = "sulphur";
    e16->sym = "S";
    e16->block = 'p';

    // Element 17
    struct node *e17;
    e17 = (struct node *)malloc(sizeof(struct node));
    e17->atno = 17;
    e17->atmass = 35.453;
    e17->name = "chlorine";
    e17->sym = "Cl";
    e17->block = 'p';

    // Element 18
    struct node *e18;
    e18 = (struct node *)malloc(sizeof(struct node));
    e18->atno = 18;
    e18->atmass = 39.948;
    e18->name = "argon";
    e18->sym = "Ar";
    e18->block = 'p';

    // Element 19
    struct node *e19;
    e19 = (struct node *)malloc(sizeof(struct node));
    e19->atno = 19;
    e19->atmass = 30.0983;
    e19->name = "potassium";
    e19->sym = "K";
    e19->block = 's';

    // Element 20
    struct node *e20;
    e20 = (struct node *)malloc(sizeof(struct node));
    e20->atno = 20;
    e20->atmass = 40.078;
    e20->name = "calcium";
    e20->sym = "Ca";
    e20->block = 's';

    // Element 21
    struct node *e21;
    e21 = (struct node *)malloc(sizeof(struct node));
    e21->atno = 21;
    e21->atmass = 44.9559;
    e21->name = "scandium";
    e21->sym = "Sc";
    e21->block = 'd';

    // Element 22
    struct node *e22;
    e22 = (struct node *)malloc(sizeof(struct node));
    e22->atno = 22;
    e22->atmass = 47.867;
    e22->name = "titanium";
    e22->sym = "Ti";
    e22->block = 'd';

    // Element 23
    struct node *e23;
    e23 = (struct node *)malloc(sizeof(struct node));
    e23->atno = 23;
    e23->atmass = 50.9415;
    e23->name = "vanadium";
    e23->sym = "V";
    e23->block = 'd';

    // Element 24
    struct node *e24;
    e24 = (struct node *)malloc(sizeof(struct node));
    e24->atno = 24;
    e24->atmass = 51.9961;
    e24->name = "cromium";
    e24->sym = "Cr";
    e24->block = 'd';

    // Element 25
    struct node *e25;
    e25 = (struct node *)malloc(sizeof(struct node));
    e25->atno = 25;
    e25->atmass = 54.9380;
    e25->name = "manganese";
    e25->sym = "Mn";
    e25->block = 'd';

    // Element 26
    struct node *e26;
    e26 = (struct node *)malloc(sizeof(struct node));
    e26->atno = 26;
    e26->atmass = 55.845;
    e26->name = "iron";
    e26->sym = "Fe";
    e26->block = 'd';

    // Element 27
    struct node *e27;
    e27 = (struct node *)malloc(sizeof(struct node));
    e27->atno = 27;
    e27->atmass = 58.9331;
    e27->name = "cobalt";
    e27->sym = "Co";
    e27->block = 'd';

    // Element 28
    struct node *e28;
    e28 = (struct node *)malloc(sizeof(struct node));
    e28->atno = 28;
    e28->atmass = 58.6934;
    e28->name = "nickel";
    e28->sym = "Ni";
    e28->block = 'd';

    // Element 29
    struct node *e29;
    e29 = (struct node *)malloc(sizeof(struct node));
    e29->atno = 29;
    e29->atmass = 63.546;
    e29->name = "copper";
    e29->sym = "Cu";
    e29->block = 'd';

    // Element 30
    struct node *e30;
    e30 = (struct node *)malloc(sizeof(struct node));
    e30->atno = 30;
    e30->atmass = 65.38;
    e30->name = "zinc";
    e30->sym = "Zn";
    e30->block = 'd';

    // Element 31
    struct node *e31;
    e31 = (struct node *)malloc(sizeof(struct node));
    e31->atno = 31;
    e31->atmass = 69.723;
    e31->name = "gallium";
    e31->sym = "Ga";
    e31->block = 'p';

    // Element 32
    struct node *e32;
    e32 = (struct node *)malloc(sizeof(struct node));
    e32->atno = 32;
    e32->atmass = 72.64;
    e32->name = "germanium";
    e32->sym = "Ge";
    e32->block = 'p';

    // Element 33
    struct node *e33;
    e33 = (struct node *)malloc(sizeof(struct node));
    e33->atno = 33;
    e33->atmass = 74.9216;
    e33->name = "arsenic";
    e33->sym = "As";
    e33->block = 'p';

    // Element 34
    struct node *e34;
    e34 = (struct node *)malloc(sizeof(struct node));
    e34->atno = 34;
    e34->atmass = 78.96;
    e34->name = "selenium";
    e34->sym = "Se";
    e34->block = 'p';

    // Element 35
    struct node *e35;
    e35 = (struct node *)malloc(sizeof(struct node));
    e35->atno = 35;
    e35->atmass = 79.904;
    e35->name = "bromine";
    e35->sym = "Br";
    e35->block = 'p';

    // Element 36
    struct node *e36;
    e36 = (struct node *)malloc(sizeof(struct node));
    e36->atno = 36;
    e36->atmass = 83.798;
    e36->name = "krypton";
    e36->sym = "Kr";
    e36->block = 'p';

    // Element 37
    struct node *e37;
    e37 = (struct node *)malloc(sizeof(struct node));
    e37->atno = 37;
    e37->atmass = 85.467;
    e37->name = "rubidium";
    e37->sym = "Rb";
    e37->block = 's';

    // Element 38
    struct node *e38;
    e38 = (struct node *)malloc(sizeof(struct node));
    e38->atno = 38;
    e38->atmass = 87.62;
    e38->name = "strontium";
    e38->sym = "Sr";
    e38->block = 's';

    // Element 39
    struct node *e39;
    e39 = (struct node *)malloc(sizeof(struct node));
    e39->atno = 39;
    e39->atmass = 88.905;
    e39->name = "yttrium";
    e39->sym = "Y";
    e39->block = 'd';

    // Element 40
    struct node *e40;
    e40 = (struct node *)malloc(sizeof(struct node));
    e40->atno = 40;
    e40->atmass = 91.224;
    e40->name = "zirconium";
    e40->sym = "Zr";
    e40->block = 'd';

    // Element41
    struct node *e41;
    e41 = (struct node *)malloc(sizeof(struct node));
    e41->atno = 41;
    e41->atmass = 92.906;
    e41->name = "niobium";
    e41->sym = "Nb";
    e41->block = 'd';

    // Element42
    struct node *e42;
    e42 = (struct node *)malloc(sizeof(struct node));
    e42->atno = 42;
    e42->atmass = 95.94;
    e42->name = "molybdenum";
    e42->sym = "Mo";
    e42->block = 'd';

    // Element43
    struct node *e43;
    e43 = (struct node *)malloc(sizeof(struct node));
    e43->atno = 43;
    e43->atmass = 98.906;
    e43->name = "technetium";
    e43->sym = "Tc";
    e43->block = 'd';

    // Element44
    struct node *e44;
    e44 = (struct node *)malloc(sizeof(struct node));
    e44->atno = 44;
    e44->atmass = 101.07;
    e44->name = "ruthenium";
    e44->sym = "Ru";
    e44->block = 'd';

    // Element45
    struct node *e45;
    e45 = (struct node *)malloc(sizeof(struct node));
    e45->atno = 45;
    e45->atmass = 102.905;
    e45->name = "rhodium";
    e45->sym = "Rh";
    e45->block = 'd';

    // Element46
    struct node *e46;
    e46 = (struct node *)malloc(sizeof(struct node));
    e46->atno = 46;
    e46->atmass = 106.42;
    e46->name = "palladium";
    e46->sym = "Pd";
    e46->block = 'd';

    // Element47
    struct node *e47;
    e47 = (struct node *)malloc(sizeof(struct node));
    e47->atno = 47;
    e47->atmass = 107.868;
    e47->name = "silver";
    e47->sym = "Ag";
    e47->block = 'd';

    // Element48
    struct node *e48;
    e48 = (struct node *)malloc(sizeof(struct node));
    e48->atno = 48;
    e48->atmass = 112.411;
    e48->name = "cadmium";
    e48->sym = "Cd";
    e48->block = 'd';

    // Element49
    struct node *e49;
    e49 = (struct node *)malloc(sizeof(struct node));
    e49->atno = 49;
    e49->atmass = 114.818;
    e49->name = "Indium";
    e49->sym = "In";
    e49->block = 'p';

    // Element50
    struct node *e50;
    e50 = (struct node *)malloc(sizeof(struct node));
    e50->atno = 50;
    e50->atmass = 118.710;
    e50->name = "tin";
    e50->sym = "Sn";
    e50->block = 'p';

    // Element51
    struct node *e51;
    e51 = (struct node *)malloc(sizeof(struct node));
    e51->atno = 51;
    e51->atmass = 121.760;
    e51->name = "antimony";
    e51->sym = "Sb";
    e51->block = 'p';

    // Element52
    struct node *e52;
    e52 = (struct node *)malloc(sizeof(struct node));
    e52->atno = 52;
    e52->atmass = 127.60;
    e52->name = "tellurium";
    e52->sym = "Te";
    e52->block = 'p';

    // Element53
    struct node *e53;
    e53 = (struct node *)malloc(sizeof(struct node));
    e53->atno = 53;
    e53->atmass = 126.904;
    e53->name = "iodine";
    e53->sym = "I";
    e53->block = 'p';

    // Element54
    struct node *e54;
    e54 = (struct node *)malloc(sizeof(struct node));
    e54->atno = 54;
    e54->atmass = 131.293;
    e54->name = "xenon";
    e54->sym = "Xe";
    e54->block = 'p';

    // Element55
    struct node *e55;
    e55 = (struct node *)malloc(sizeof(struct node));
    e55->atno = 55;
    e55->atmass = 132.905;
    e55->name = "caesium";
    e55->sym = "Cs";
    e55->block = 's';

    // Element56
    struct node *e56;
    e56 = (struct node *)malloc(sizeof(struct node));
    e56->atno = 56;
    e56->atmass = 137.327;
    e56->name = "barium";
    e56->sym = "Ba";
    e56->block = 's';

    // Element57
    struct node *e57;
    e57 = (struct node *)malloc(sizeof(struct node));
    e57->atno = 57;
    e57->atmass = 138.905;
    e57->name = "lanthanum";
    e57->sym = "La";
    e57->block = 'd';

    // Element58
    struct node *e58;
    e58 = (struct node *)malloc(sizeof(struct node));
    e58->atno = 58;
    e58->atmass = 140.116;
    e58->name = "cerium";
    e58->sym = "Ce";
    e58->block = 'f';

    // Element59
    struct node *e59;
    e59 = (struct node *)malloc(sizeof(struct node));
    e59->atno = 59;
    e59->atmass = 140.904;
    e59->name = "praseodymium";
    e59->sym = "Pr";
    e59->block = 'f';

    // Element60
    struct node *e60;
    e60 = (struct node *)malloc(sizeof(struct node));
    e60->atno = 60;
    e60->atmass = 144.242;
    e60->name = "neodymium";
    e60->sym = "Nd";
    e60->block = 'f';

    // Element61
    struct node *e61;
    e61 = (struct node *)malloc(sizeof(struct node));
    e61->atno = 61;
    e61->atmass = 144.912;
    e61->name = "promethium";
    e61->sym = "Pm";
    e61->block = 'f';

    // Element62
    struct node *e62;
    e62 = (struct node *)malloc(sizeof(struct node));
    e62->atno = 62;
    e62->atmass = 150.36;
    e62->name = "samarium";
    e62->sym = "Sm";
    e62->block = 'f';

    // Element63
    struct node *e63;
    e63 = (struct node *)malloc(sizeof(struct node));
    e63->atno = 63;
    e63->atmass = 151.964;
    e63->name = "europium";
    e63->sym = "Eu";
    e63->block = 'f';

    // Element64
    struct node *e64;
    e64 = (struct node *)malloc(sizeof(struct node));
    e64->atno = 64;
    e64->atmass = 157.25;
    e64->name = "gadolinium";
    e64->sym = "Gd";
    e64->block = 'f';

    // Element65
    struct node *e65;
    e65 = (struct node *)malloc(sizeof(struct node));
    e65->atno = 65;
    e65->atmass = 158.925;
    e65->name = "terbium";
    e65->sym = "Tb";
    e65->block = 'f';

    // Element66
    struct node *e66;
    e66 = (struct node *)malloc(sizeof(struct node));
    e66->atno = 66;
    e66->atmass = 162.500;
    e66->name = "dysprosium";
    e66->sym = "Dy";
    e66->block = 'f';

    // Element67
    struct node *e67;
    e67 = (struct node *)malloc(sizeof(struct node));
    e67->atno = 67;
    e67->atmass = 164.93;
    e67->name = "Holmium";
    e67->sym = "Ho";
    e67->block = 'f';

    // Element68
    struct node *e68;
    e68 = (struct node *)malloc(sizeof(struct node));
    e68->atno = 68;
    e68->atmass = 167.259;
    e68->name = "erbium";
    e68->sym = "Er";
    e68->block = 'f';

    // Element69
    struct node *e69;
    e69 = (struct node *)malloc(sizeof(struct node));
    e69->atno = 69;
    e69->atmass = 168.934;
    e69->name = "thulium";
    e69->sym = "Tm";
    e69->block = 'f';

    // Element70
    struct node *e70;
    e70 = (struct node *)malloc(sizeof(struct node));
    e70->atno = 70;
    e70->atmass = 173.04;
    e70->name = "ytterbium";
    e70->sym = "Yb";
    e70->block = 'f';

    // Element71
    struct node *e71;
    e71 = (struct node *)malloc(sizeof(struct node));
    e71->atno = 71;
    e71->atmass = 174.967;
    e71->name = "lutetium";
    e71->sym = "Lu";
    e71->block = 'd';

    // Element72
    struct node *e72;
    e72 = (struct node *)malloc(sizeof(struct node));
    e72->atno = 72;
    e72->atmass = 178.49;
    e72->name = "hafnium";
    e72->sym = "Hf";
    e72->block = 'd';

    // Element73
    struct node *e73;
    e73 = (struct node *)malloc(sizeof(struct node));
    e73->atno = 73;
    e73->atmass = 180.947;
    e73->name = "tantalum";
    e73->sym = "Ta";
    e73->block = 'd';

    // Element74
    struct node *e74;
    e74 = (struct node *)malloc(sizeof(struct node));
    e74->atno = 74;
    e74->atmass = 183.84;
    e74->name = "tungsten";
    e74->sym = "W";
    e74->block = 'd';

    // Element75
    struct node *e75;
    e75 = (struct node *)malloc(sizeof(struct node));
    e75->atno = 75;
    e75->atmass = 186.207;
    e75->name = "rhenium";
    e75->sym = "Re";
    e75->block = 'd';

    // Element76
    struct node *e76;
    e76 = (struct node *)malloc(sizeof(struct node));
    e76->atno = 76;
    e76->atmass = 190.23;
    e76->name = "osmium";
    e76->sym = "Os";
    e76->block = 'd';

    // Element77
    struct node *e77;
    e77 = (struct node *)malloc(sizeof(struct node));
    e77->atno = 77;
    e77->atmass = 192.217;
    e77->name = "iridium";
    e77->sym = "Ir";
    e77->block = 'd';

    // Element78
    struct node *e78;
    e78 = (struct node *)malloc(sizeof(struct node));
    e78->atno = 78;
    e78->atmass = 195.084;
    e78->name = "platinum";
    e78->sym = "Pt";
    e78->block = 'd';

    // Element79
    struct node *e79;
    e79 = (struct node *)malloc(sizeof(struct node));
    e79->atno = 79;
    e79->atmass = 196.966;
    e79->name = "gold";
    e79->sym = "Au";
    e79->block = 'd';

    // Element80
    struct node *e80;
    e80 = (struct node *)malloc(sizeof(struct node));
    e80->atno = 80;
    e80->atmass = 200.59;
    e80->name = "mercury";
    e80->sym = "Hg";
    e80->block = 'd';

    // Element81
    struct node *e81;
    e81 = (struct node *)malloc(sizeof(struct node));
    e81->atno = 81;
    e81->atmass = 204.383;
    e81->name = "thallium";
    e81->sym = "Th";
    e81->block = 'p';

    // Element82
    struct node *e82;
    e82 = (struct node *)malloc(sizeof(struct node));
    e82->atno = 82;
    e82->atmass = 207.2;
    e82->name = "lead";
    e82->sym = "Pb";
    e82->block = 'p';

    // Element83
    struct node *e83;
    e83 = (struct node *)malloc(sizeof(struct node));
    e83->atno = 83;
    e83->atmass = 208.9804;
    e83->name = "bismuth";
    e83->sym = "Bi";
    e83->block = 'p';

    // Element84
    struct node *e84;
    e84 = (struct node *)malloc(sizeof(struct node));
    e84->atno = 84;
    e84->atmass = 208.9824;
    e84->name = "polonium";
    e84->sym = "Po";
    e84->block = 'p';

    // Element85
    struct node *e85;
    e85 = (struct node *)malloc(sizeof(struct node));
    e85->atno = 85;
    e85->atmass = 209.9871;
    e85->name = "astatine";
    e85->sym = "At";
    e85->block = 'p';

    // Element86
    struct node *e86;
    e86 = (struct node *)malloc(sizeof(struct node));
    e86->atno = 86;
    e86->atmass = 222.0176;
    e86->name = "radon";
    e86->sym = "Rn";
    e86->block = 'p';

    // Element87
    struct node *e87;
    e87 = (struct node *)malloc(sizeof(struct node));
    e87->atno = 87;
    e87->atmass = 223.0197;
    e87->name = "francium";
    e87->sym = "Fr";
    e87->block = 's';

    // Element88
    struct node *e88;
    e88 = (struct node *)malloc(sizeof(struct node));
    e88->atno = 88;
    e88->atmass = 226.0254;
    e88->name = "radium";
    e88->sym = "Ra";
    e88->block = 's';

    // Element89
    struct node *e89;
    e89 = (struct node *)malloc(sizeof(struct node));
    e89->atno = 89;
    e89->atmass = 227.0278;
    e89->name = "actinium";
    e89->sym = "Ac";
    e89->block = 'd';

    // Element90
    struct node *e90;
    e90 = (struct node *)malloc(sizeof(struct node));
    e90->atno = 90;
    e90->atmass = 232.0380;
    e90->name = "thorium";
    e90->sym = "Th";
    e90->block = 'f';

    // Element91
    struct node *e91;
    e91 = (struct node *)malloc(sizeof(struct node));
    e91->atno = 91;
    e91->atmass = 231.0358;
    e91->name = "protactinium";
    e91->sym = "Pa";
    e91->block = 'f';

    // Element92
    struct node *e92;
    e92 = (struct node *)malloc(sizeof(struct node));
    e92->atno = 92;
    e92->atmass = 238.0289;
    e92->name = "uranium";
    e92->sym = "U";
    e92->block = 'f';

    // Element93
    struct node *e93;
    e93 = (struct node *)malloc(sizeof(struct node));
    e93->atno = 93;
    e93->atmass = 237.0482;
    e93->name = "neptunium";
    e93->sym = "Np";
    e93->block = 'f';

    // Element94
    struct node *e94;
    e94 = (struct node *)malloc(sizeof(struct node));
    e94->atno = 94;
    e94->atmass = 244.0642;
    e94->name = "plutonium";
    e94->sym = "Pu";
    e94->block = 'f';

    // Element95
    struct node *e95;
    e95 = (struct node *)malloc(sizeof(struct node));
    e95->atno = 95;
    e95->atmass = 243.0614;
    e95->name = "americium";
    e95->sym = "Am";
    e95->block = 'f';

    // Element96
    struct node *e96;
    e96 = (struct node *)malloc(sizeof(struct node));
    e96->atno = 96;
    e96->atmass = 247.0703;
    e96->name = "curium";
    e96->sym = "Cm";
    e96->block = 'f';

    // Element97
    struct node *e97;
    e97 = (struct node *)malloc(sizeof(struct node));
    e97->atno = 97;
    e97->atmass = 247.0703;
    e97->name = "berkelium";
    e97->sym = "Bk";
    e97->block = 'f';

    // Element98
    struct node *e98;
    e98 = (struct node *)malloc(sizeof(struct node));
    e98->atno = 98;
    e98->atmass = 251.0796;
    e98->name = "californium";
    e98->sym = "Cf";
    e98->block = 'f';

    // Element99
    struct node *e99;
    e99 = (struct node *)malloc(sizeof(struct node));
    e99->atno = 99;
    e99->atmass = 252.0829;
    e99->name = "einsteinium";
    e99->sym = "Es";
    e99->block = 'f';

    // Element100
    struct node *e100;
    e100 = (struct node *)malloc(sizeof(struct node));
    e100->atno = 100;
    e100->atmass = 257.0951;
    e100->name = "fermium";
    e100->sym = "Fm";
    e100->block = 'f';

    // Element101
    struct node *e101;
    e101 = (struct node *)malloc(sizeof(struct node));
    e101->atno = 101;
    e101->atmass = 258.0951;
    e101->name = "mendelevium";
    e101->sym = "Md";
    e101->block = 'f';

    // Element102
    struct node *e102;
    e102 = (struct node *)malloc(sizeof(struct node));
    e102->atno = 102;
    e102->atmass = 259.1009;
    e102->name = "nobelium";
    e102->sym = "No";
    e102->block = 'f';

    // Element103
    struct node *e103;
    e103 = (struct node *)malloc(sizeof(struct node));
    e103->atno = 103;
    e103->atmass = 266.1193;
    e103->name = "lawrencium";
    e103->sym = "Lr";
    e103->block = 'd';

    // Element104
    struct node *e104;
    e104 = (struct node *)malloc(sizeof(struct node));
    e104->name = "rutherfordium";
    e104->atno = 104;
    e104->atmass = 261.1087;
    e104->sym = "Rf";
    e104->block = 'd';

    // Element105
    struct node *e105;
    e105 = (struct node *)malloc(sizeof(struct node));
    e105->name = "dubnium";
    e105->atno = 105;
    e105->atmass = 262.1138;
    e105->sym = "Db";
    e105->block = 'd';

    // Element106
    struct node *e106;
    e106 = (struct node *)malloc(sizeof(struct node));
    e106->name = "seaborgium";
    e106->atno = 106;
    e106->atmass = 263.1182;
    e106->sym = "Sg";
    e106->block = 'd';

    // Element107
    struct node *e107;
    e107 = (struct node *)malloc(sizeof(struct node));
    e107->name = "bohrium";
    e107->atno = 107;
    e107->atmass = 262.1229;
    e107->sym = "Bh";
    e107->block = 'd';

    // Element108
    struct node *e108;
    e108 = (struct node *)malloc(sizeof(struct node));
    e108->name = "hassium";
    e108->atno = 108;
    e108->atmass = 269;
    e108->sym = "Hs";
    e108->block = 'd';

    // Element109
    struct node *e109;
    e109 = (struct node *)malloc(sizeof(struct node));
    e109->name = "meitnerium";
    e109->atno = 109;
    e109->atmass = 278;
    e109->sym = "Mt";
    e109->block = 'd';

    // Element110
    struct node *e110;
    e110 = (struct node *)malloc(sizeof(struct node));
    e110->name = "darmstadtium";
    e110->atno = 110;
    e110->atmass = 281.1620;
    e110->sym = "Ds";
    e110->block = 'd';

    // Element111
    struct node *e111;
    e111 = (struct node *)malloc(sizeof(struct node));
    e111->name = "roentgenium";
    e111->atno = 111;
    e111->atmass = 281.1684;
    e111->sym = "Rg";
    e111->block = 'd';

    // Element112
    struct node *e112;
    e112 = (struct node *)malloc(sizeof(struct node));
    e112->name = "copernicium";
    e112->atno = 112;
    e112->atmass = 285.1744;
    e112->sym = "Cn";
    e112->block = 'd';

    // Element113
    struct node *e113;
    e113 = (struct node *)malloc(sizeof(struct node));
    e113->name = "nihonium";
    e113->atno = 113;
    e113->atmass = 286.1810;
    e113->sym = "Nh";
    e113->block = 'p';

    // Element114
    struct node *e114;
    e114 = (struct node *)malloc(sizeof(struct node));
    e114->name = "flerovium";
    e114->atno = 114;
    e114->atmass = 287.1904;
    e114->sym = "Fl";
    e114->block = 'p';

    // Element115
    struct node *e115;
    e115 = (struct node *)malloc(sizeof(struct node));
    e115->name = "moscovium";
    e115->atno = 115;
    e115->atmass = 288.1943;
    e115->sym = "Mc";
    e115->block = 'p';

    // Element116
    struct node *e116;
    e116 = (struct node *)malloc(sizeof(struct node));
    e116->name = "livermorium";
    e116->atno = 116;
    e116->atmass = 291.2045;
    e116->sym = "Lv";
    e116->block = 'p';

    // Element117
    struct node *e117;
    e117 = (struct node *)malloc(sizeof(struct node));
    e117->name = "tennessine";
    e117->atno = 117;
    e117->atmass = 294.2104;
    e117->sym = "Ts";
    e117->block = 'p';

    // Element118
    struct node *e118;
    e118 = (struct node *)malloc(sizeof(struct node));
    e118->name = "oganesson";
    e118->atno = 118;
    e118->atmass = 294.2139;
    e118->sym = "118";
    e118->block = 'p';

    // linking all elements
    e1->next = e2;
    e2->next = e3;
    e3->next = e4;
    e4->next = e5;
    e5->next = e6;
    e6->next = e7;
    e7->next = e8;
    e8->next = e9;
    e9->next = e10;
    e10->next = e11;
    e11->next = e12;
    e12->next = e13;
    e13->next = e14;
    e14->next = e15;
    e15->next = e16;
    e16->next = e17;
    e17->next = e18;
    e18->next = e19;
    e19->next = e20;
    e20->next = e21;
    e21->next = e22;
    e22->next = e23;
    e23->next = e24;
    e24->next = e25;
    e25->next = e26;
    e26->next = e27;
    e27->next = e28;
    e28->next = e29;
    e29->next = e30;
    e30->next = e31;
    e31->next = e32;
    e32->next = e33;
    e33->next = e34;
    e34->next = e35;
    e35->next = e36;
    e36->next = e37;
    e37->next = e38;
    e38->next = e39;
    e39->next = e40;
    e40->next = e41;
    e41->next = e42;
    e42->next = e43;
    e43->next = e44;
    e44->next = e45;
    e45->next = e46;
    e46->next = e47;
    e47->next = e48;
    e48->next = e49;
    e49->next = e50;
    e50->next = e51;
    e51->next = e52;
    e52->next = e53;
    e53->next = e54;
    e54->next = e55;
    e55->next = e56;
    e56->next = e57;
    e57->next = e58;
    e58->next = e59;
    e59->next = e60;
    e60->next = e61;
    e61->next = e62;
    e62->next = e63;
    e63->next = e64;
    e64->next = e65;
    e65->next = e66;
    e66->next = e67;
    e67->next = e68;
    e68->next = e69;
    e69->next = e70;
    e70->next = e71;
    e71->next = e72;
    e72->next = e73;
    e73->next = e74;
    e74->next = e75;
    e75->next = e76;
    e76->next = e77;
    e77->next = e78;
    e78->next = e79;
    e79->next = e80;
    e80->next = e81;
    e81->next = e82;
    e82->next = e83;
    e83->next = e84;
    e84->next = e85;
    e85->next = e86;
    e86->next = e87;
    e87->next = e88;
    e88->next = e89;
    e89->next = e90;
    e90->next = e91;
    e91->next = e92;
    e92->next = e93;
    e93->next = e94;
    e94->next = e95;
    e95->next = e96;
    e96->next = e97;
    e97->next = e98;
    e98->next = e99;
    e99->next = e100;
    e100->next = e101;
    e101->next = e102;
    e102->next = e103;
    e103->next = e104;
    e104->next = e105;
    e105->next = e106;
    e106->next = e107;
    e107->next = e108;
    e108->next = e109;
    e109->next = e110;
    e110->next = e111;
    e111->next = e112;
    e112->next = e113;
    e113->next = e114;
    e114->next = e115;
    e115->next = e116;
    e116->next = e117;
    e117->next = e118;
    e118->next = NULL;

    //  function : user and admin.

    int ch;

    while (1)
    {
        int flagx = 1;
        printf("\033[1;35m");
        printf("\n\nIdentify yourself :\n\n        1]Enter 1 if you are user.\n        2]Enter 2 for admin control.\n        3]Enter 3 to exit.\n\n");
        printf("\033[0m");
        scanf("%d", &ch);
        switch (ch)
        {
            while (flagx)
            {
            case 1:

                // function : search.
                printf("\033[1;35m");
                printf("\n        1]Enter 1 to Display entire Periodic Table.\n        2]Enter 2 for searching by name.\n        3]Enter 3 for searching by symbole.\n        4]Enter 4 for searching by atomic number.\n        5]Enter 5 to EXIT.\n\n");
                printf("\033[0m");
                int ch1;
                scanf("%d", &ch1);

                switch (ch1)
                {

                case 1:
                    ppt();
                    break; // case1

                case 2:
                    printf("\033[1;35m");
                    printf("\n\nEnter the name of element. [ps* case sensitive(all small)]\n\n");
                    printf("\033[0m");
                    char elementname[10];
                    scanf("%s", &elementname);

                    int result1;
                    result1 = searchbyname(e1, elementname);
                    if (result1 == 0)
                    {
                        printf("\033[1;31m");

                        printf("\n\n                                                                                   ***Element not found***\n\n");
                        printf("\033[0m");
                    }

                    break; // case2

                case 3:
                    printf("\033[1;35m");

                    printf("\n\nEnter the symbole of element. [ps* case sensitive]\n\n");
                    printf("\033[0m");
                    char elementsymbole[10];
                    scanf("%s", &elementsymbole);

                    int result2;
                    result2 = searchbysym(e1, elementsymbole);
                    if (result2 == 0)
                    {
                        printf("\033[1;31m");

                        printf("\n\n                                                                                   ***Element not found***\n\n");
                        printf("\033[0m");
                    }

                    break; // case3

                case 4:
                    printf("\033[1;35m");

                    printf("\n\nEnter the atomic number of element.\n\n");
                    printf("\033[0m");
                    int atn;
                    scanf("%d", &atn);

                    int result3;
                    result3 = searchbyatno(e1, atn);
                    if (result3 == 0)
                    {
                        printf("\033[1;31m");

                        printf("\n\n                                                                                   ***Element not found***\n\n");
                        printf("\033[0m");
                    }

                    break; // case4
                case 5:
                    flagx = 0;
                    break;
                } // case5
            }

            break;

        case 2:

            printf("\033[1;36m");
            int flagy = 1;
            char ch5;
            printf("\n\nTo mask your password Press 1\nOr else Press 0\n\n");
            scanf("%d", &ch5);
            printf("\033[0m");
            char password[7];
            char ch0;
            int q = 0;
            char *pass = "pirate";
            switch (ch5)
            {
            case 1:
                printf("\n\n        Enter password(6-DIGIT)  : \n\n");

                while (1)
                {
                    if (q == 6)
                    {
                        password[q] = '\0';
                        break;
                    }
                    ch0 = getch();

                    password[q] = ch0;
                    q++;
                    printf("*");
                }
                if (strcmp(password, pass) == 0)
                {
                    while (flagy)
                    {
                        printf("\033[1;36m");
                        printf("\n\n        You enter the admin mode.\n\n");
                        printf("\033[0m");
                        int ch2;
                        printf("\033[1;36m");

                        printf("1]Enter 1 for adding element.\n2]Enter 2 for deleting element.\n3]Enter 3 to EXIT.\n\n");
                        printf("\033[0m");
                        scanf("%d", &ch2);
                        switch (ch2)
                        {
                        case 1:
                            // linkedlisttraversal(e1);
                            e1 = createnewelement(e1);
                            // linkedlisttraversal(e1);
                            break;

                        case 2:
                            // deletnode
                            deleteelement(e1);
                            // linkedlisttraversal(e1);

                            break;
                        case 3:
                            flagy = 0;
                            break;
                        }
                    }
                }

                else
                {
                    printf("\033[1;31m");

                    printf("\n\n                                                                                   ***Wrong Password***\n");
                    printf("\033[0m");
                    // exit(0);
                }
                break;

            case 0:
                printf("\n\n        Enter password  : \n\n");

                scanf("%s", &password);
                if (strcmp(password, pass) == 0)
                {
                    while (flagy)
                    {
                        printf("\033[1;36m");
                        printf("\n\n        You enter the admin mode.\n\n");
                        printf("\033[0m");
                        int ch2;
                        printf("\033[1;36m");

                        printf("1]Enter 1 for adding element.\n2]Enter 2 for deleting element.\n3]Enter 3 to EXIT.\n\n");
                        printf("\033[0m");
                        scanf("%d", &ch2);
                        switch (ch2)
                        {
                        case 1:
                        //create node
                            // linkedlisttraversal(e1);
                            e1 = createnewelement(e1);
                            // linkedlisttraversal(e1);
                            break;

                        case 2:
                            // delete node
                            deleteelement(e1);
                            // linkedlisttraversal(e1);

                            break;
                        case 3:
                            flagy = 0;
                            break;
                        }
                    }
                }

                else
                {
                    printf("\033[1;31m");

                    printf("\n\n                                                                                   ***Wrong Password***\n");
                    printf("\033[0m");
                    // exit(0);
                }
                break;
            }

            break;
        case 3:
            exit(0);
            break;
        }

    } // while
    // linkedlisttraversal(e1);
    return 0;
}
