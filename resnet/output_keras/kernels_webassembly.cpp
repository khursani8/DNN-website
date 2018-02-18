
#include <stdlib.h>
#include <math.h>

float static_buffer[53439888];
float* dynamic_buffer = nullptr;

int meta_buf_0[] = {50451368,25526632,1,3,224,224,112,112,7,7,1,1,2,2,3,3};
int meta_buf_1[] = {25526632,0,36210472,12544,64,147};
int meta_buf_2[] = {9408,36210472,36210472,64,64,64,12544};
int meta_buf_3[] = {36210472,50064168,1,112,112,64,55,55,3,3,2,2,0,0};
int meta_buf_4[] = {50064168,9472,50257768,3025,64,64};
int meta_buf_5[] = {13568,50257768,50257768,64,64,64,3025};
int meta_buf_6[] = {50257768,30855400,1,64,55,55,55,55,3,3,1,1,1,1,1,1};
int meta_buf_7[] = {30855400,13632,49870568,3025,64,576};
int meta_buf_8[] = {50496,49870568,49870568,64,64,64,3025};
int meta_buf_9[] = {49870568,50560,38562088,3025,256,64};
int meta_buf_10[] = {50064168,66944,39336488,3025,256,64};
int meta_buf_11[] = {83328,39336488,38562088,39336488,256,256,256,256,3025};
int meta_buf_12[] = {39336488,83584,49676968,3025,64,256};
int meta_buf_13[] = {99968,49676968,49483368,64,64,64,3025};
int meta_buf_14[] = {49483368,29113000,1,64,55,55,55,55,3,3,1,1,1,1,1,1};
int meta_buf_15[] = {29113000,100032,49289768,3025,64,576};
int meta_buf_16[] = {136896,49289768,48902568,64,64,64,3025};
int meta_buf_17[] = {48902568,136960,37787688,3025,256,64};
int meta_buf_18[] = {153344,37787688,39336488,37787688,256,256,256,256,3025};
int meta_buf_19[] = {37787688,153600,49096168,3025,64,256};
int meta_buf_20[] = {169984,49096168,49096168,64,64,64,3025};
int meta_buf_21[] = {49096168,27370600,1,64,55,55,55,55,3,3,1,1,1,1,1,1};
int meta_buf_22[] = {27370600,170048,48708968,3025,64,576};
int meta_buf_23[] = {206912,48708968,48515368,64,64,64,3025};
int meta_buf_24[] = {48515368,206976,37013288,3025,256,64};
int meta_buf_25[] = {223360,37787688,37013288,37787688,256,256,256,256,3025};
int meta_buf_26[] = {37787688,47913256,1,256,55,55,28,28,1,1,1,1,2,2,0,0};
int meta_buf_27[] = {47913256,223616,52006824,784,128,256};
int meta_buf_28[] = {256384,52006824,52006824,128,128,128,784};
int meta_buf_29[] = {52006824,35307304,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_30[] = {35307304,256512,51705768,784,128,1152};
int meta_buf_31[] = {403968,51705768,51705768,128,128,128,784};
int meta_buf_32[] = {51705768,404096,44426024,784,512,128};
int meta_buf_33[] = {37787688,47110440,1,256,55,55,28,28,1,1,1,1,2,2,0,0};
int meta_buf_34[] = {47110440,469632,44024616,784,512,256};
int meta_buf_35[] = {600704,44024616,44426024,44024616,512,512,512,512,784};
int meta_buf_36[] = {44024616,601216,51605416,784,128,512};
int meta_buf_37[] = {666752,51605416,51605416,128,128,128,784};
int meta_buf_38[] = {51605416,34404136,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_39[] = {34404136,666880,51505064,784,128,1152};
int meta_buf_40[] = {814336,51505064,51505064,128,128,128,784};
int meta_buf_41[] = {51505064,814464,43623208,784,512,128};
int meta_buf_42[] = {880000,43623208,44024616,43221800,512,512,512,512,784};
int meta_buf_43[] = {43221800,880512,51404712,784,128,512};
int meta_buf_44[] = {946048,51404712,51404712,128,128,128,784};
int meta_buf_45[] = {51404712,33500968,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_46[] = {33500968,946176,51304360,784,128,1152};
int meta_buf_47[] = {1093632,51304360,51304360,128,128,128,784};
int meta_buf_48[] = {51304360,1093760,42820392,784,512,128};
int meta_buf_49[] = {1159296,43221800,42820392,43221800,512,512,512,512,784};
int meta_buf_50[] = {43221800,1159808,50902952,784,128,512};
int meta_buf_51[] = {1225344,50902952,50802600,128,128,128,784};
int meta_buf_52[] = {50802600,32597800,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_53[] = {32597800,1225472,51003304,784,128,1152};
int meta_buf_54[] = {1372928,51003304,51003304,128,128,128,784};
int meta_buf_55[] = {51003304,1373056,45228840,784,512,128};
int meta_buf_56[] = {1438592,43221800,45228840,44827432,512,512,512,512,784};
int meta_buf_57[] = {44827432,52207528,1,512,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_58[] = {52207528,1439104,52458408,196,256,512};
int meta_buf_59[] = {1570176,52458408,52458408,256,256,256,196};
int meta_buf_60[] = {52458408,41917224,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_61[] = {41917224,1570432,53060520,196,256,2304};
int meta_buf_62[] = {2160256,53060520,53060520,256,256,256,196};
int meta_buf_63[] = {53060520,2160512,46508328,196,1024,256};
int meta_buf_64[] = {44827432,51806120,1,512,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_65[] = {51806120,2422656,47712552,196,1024,512};
int meta_buf_66[] = {2946944,46508328,47712552,46508328,1024,1024,1024,1024,196};
int meta_buf_67[] = {46508328,2947968,52759464,196,256,1024};
int meta_buf_68[] = {3210112,52759464,52709288,256,256,256,196};
int meta_buf_69[] = {52709288,41014056,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_70[] = {41014056,3210368,52809640,196,256,2304};
int meta_buf_71[] = {3800192,52809640,52809640,256,256,256,196};
int meta_buf_72[] = {52809640,3800448,46909736,196,1024,256};
int meta_buf_73[] = {4062592,46508328,46909736,46508328,1024,1024,1024,1024,196};
int meta_buf_74[] = {46508328,4063616,52608936,196,256,1024};
int meta_buf_75[] = {4325760,52608936,52608936,256,256,256,196};
int meta_buf_76[] = {52608936,40562472,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_77[] = {40562472,4326016,52508584,196,256,2304};
int meta_buf_78[] = {4915840,52508584,52508584,256,256,256,196};
int meta_buf_79[] = {52508584,4916096,46709032,196,1024,256};
int meta_buf_80[] = {5178240,46508328,46709032,46508328,1024,1024,1024,1024,196};
int meta_buf_81[] = {46508328,5179264,52408232,196,256,1024};
int meta_buf_82[] = {5441408,52408232,52408232,256,256,256,196};
int meta_buf_83[] = {52408232,40110888,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_84[] = {40110888,5441664,52358056,196,256,2304};
int meta_buf_85[] = {6031488,52358056,52307880,256,256,256,196};
int meta_buf_86[] = {52307880,6031744,48314664,196,1024,256};
int meta_buf_87[] = {6293888,48314664,46508328,48113960,1024,1024,1024,1024,196};
int meta_buf_88[] = {48113960,6294912,53211048,196,256,1024};
int meta_buf_89[] = {6557056,53211048,53160872,256,256,256,196};
int meta_buf_90[] = {53160872,42368808,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_91[] = {42368808,6557312,53110696,196,256,2304};
int meta_buf_92[] = {7147136,53110696,53010344,256,256,256,196};
int meta_buf_93[] = {53010344,7147392,46307624,196,1024,256};
int meta_buf_94[] = {7409536,46307624,48113960,46307624,1024,1024,1024,1024,196};
int meta_buf_95[] = {46307624,7410560,52909992,196,256,1024};
int meta_buf_96[] = {7672704,52909992,52859816,256,256,256,196};
int meta_buf_97[] = {52859816,41465640,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_98[] = {41465640,7672960,52960168,196,256,2304};
int meta_buf_99[] = {8262784,52960168,52960168,256,256,256,196};
int meta_buf_100[] = {52960168,8263040,47511848,196,1024,256};
int meta_buf_101[] = {8525184,47511848,46307624,47311144,1024,1024,1024,1024,196};
int meta_buf_102[] = {47311144,52659112,1,1024,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_103[] = {52659112,8526208,53411752,49,512,1024};
int meta_buf_104[] = {9050496,53411752,53411752,512,512,512,49};
int meta_buf_105[] = {53411752,45856040,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_106[] = {45856040,9051008,53361576,49,512,4608};
int meta_buf_107[] = {11410304,53361576,53386664,512,512,512,49};
int meta_buf_108[] = {53386664,11410816,51204008,49,2048,512};
int meta_buf_109[] = {47311144,52558760,1,1024,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_110[] = {52558760,12459392,51103656,49,2048,1024};
int meta_buf_111[] = {14556544,51204008,51103656,50702248,2048,2048,2048,2048,49};
int meta_buf_112[] = {50702248,14558592,53336488,49,512,2048};
int meta_buf_113[] = {15607168,53336488,53336488,512,512,512,49};
int meta_buf_114[] = {53336488,45630248,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_115[] = {45630248,15607680,53286312,49,512,4608};
int meta_buf_116[] = {17966976,53286312,53286312,512,512,512,49};
int meta_buf_117[] = {53286312,17967488,50601896,49,2048,512};
int meta_buf_118[] = {19016064,50702248,50601896,50702248,2048,2048,2048,2048,49};
int meta_buf_119[] = {50702248,19018112,53261224,49,512,2048};
int meta_buf_120[] = {20066688,53261224,53261224,512,512,512,49};
int meta_buf_121[] = {53261224,46081832,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_122[] = {46081832,20067200,53311400,49,512,4608};
int meta_buf_123[] = {22426496,53311400,53311400,512,512,512,49};
int meta_buf_124[] = {53311400,22427008,52107176,49,2048,512};
int meta_buf_125[] = {23475584,50702248,52107176,51906472,2048,2048,2048,2048,49};
int meta_buf_126[] = {51906472,53436840,1,7,7,2048,1,1,7,7,7,7,0,0};
int meta_buf_127[] = {53436840,23477632,53438888,1,1000,2048};
int meta_buf_128[] = {25525632,53438888,53438888,1000};
int meta_buf_129[] = {53438888,53438888,1,1000};
int* meta_buffers[] = {meta_buf_0,meta_buf_1,meta_buf_2,meta_buf_3,meta_buf_4,meta_buf_5,meta_buf_6,meta_buf_7,meta_buf_8,meta_buf_9,meta_buf_10,meta_buf_11,meta_buf_12,meta_buf_13,meta_buf_14,meta_buf_15,meta_buf_16,meta_buf_17,meta_buf_18,meta_buf_19,meta_buf_20,meta_buf_21,meta_buf_22,meta_buf_23,meta_buf_24,meta_buf_25,meta_buf_26,meta_buf_27,meta_buf_28,meta_buf_29,meta_buf_30,meta_buf_31,meta_buf_32,meta_buf_33,meta_buf_34,meta_buf_35,meta_buf_36,meta_buf_37,meta_buf_38,meta_buf_39,meta_buf_40,meta_buf_41,meta_buf_42,meta_buf_43,meta_buf_44,meta_buf_45,meta_buf_46,meta_buf_47,meta_buf_48,meta_buf_49,meta_buf_50,meta_buf_51,meta_buf_52,meta_buf_53,meta_buf_54,meta_buf_55,meta_buf_56,meta_buf_57,meta_buf_58,meta_buf_59,meta_buf_60,meta_buf_61,meta_buf_62,meta_buf_63,meta_buf_64,meta_buf_65,meta_buf_66,meta_buf_67,meta_buf_68,meta_buf_69,meta_buf_70,meta_buf_71,meta_buf_72,meta_buf_73,meta_buf_74,meta_buf_75,meta_buf_76,meta_buf_77,meta_buf_78,meta_buf_79,meta_buf_80,meta_buf_81,meta_buf_82,meta_buf_83,meta_buf_84,meta_buf_85,meta_buf_86,meta_buf_87,meta_buf_88,meta_buf_89,meta_buf_90,meta_buf_91,meta_buf_92,meta_buf_93,meta_buf_94,meta_buf_95,meta_buf_96,meta_buf_97,meta_buf_98,meta_buf_99,meta_buf_100,meta_buf_101,meta_buf_102,meta_buf_103,meta_buf_104,meta_buf_105,meta_buf_106,meta_buf_107,meta_buf_108,meta_buf_109,meta_buf_110,meta_buf_111,meta_buf_112,meta_buf_113,meta_buf_114,meta_buf_115,meta_buf_116,meta_buf_117,meta_buf_118,meta_buf_119,meta_buf_120,meta_buf_121,meta_buf_122,meta_buf_123,meta_buf_124,meta_buf_125,meta_buf_126,meta_buf_127,meta_buf_128,meta_buf_129};

extern "C" void init() {
    //static_buffer = (float*)malloc(53439888 * sizeof(float));
}

extern "C" float* get_static_buffer(void) {
    return static_buffer;
}

extern "C" float* allocate_dynamic_buffer(int count) {
    if (dynamic_buffer) {
        free(dynamic_buffer);
        dynamic_buffer = nullptr;
    }
    dynamic_buffer = (float*)malloc(count * sizeof(float));
    return dynamic_buffer;
}

extern "C" float* get_dynamic_buffer(void) {
    return dynamic_buffer;
}
extern "C" void set_placeholder_value(int kernel_order, int offset, int value) {
    meta_buffers[kernel_order][offset] = value;
}

void im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(const int * meta_buffer)
{
    const float *im = (static_buffer + meta_buffer[0]);
    float *col = (static_buffer + meta_buffer[1]);

    const int N = meta_buffer[2];
    const int C1 = meta_buffer[3];
    const int H1 = meta_buffer[4];
    const int W1 = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int DH = meta_buffer[10];
    const int DW = meta_buffer[11];
    const int SH = meta_buffer[12];
    const int SW = meta_buffer[13];
    const int PH = meta_buffer[14];
    const int PW = meta_buffer[15];

    for (int gid = 0; gid < N*H2*W2*KH*KW*C1; gid += 1) {
        const int c1 = gid % C1;
        const int kw = gid / C1 % KW;
        const int kh = gid / C1 / KW % KH;
        const int w2 = gid / C1 / KW / KH % W2;
        const int h2 = gid / C1 / KW / KH / W2 % H2;
        const int  n = gid / C1 / KW / KH / W2 / H2;

        const int h1 = h2 * SH - PH + kh * DH;
        const int w1 = w2 * SW - PW + kw * DW;

        col[gid] = (h1 < 0 || h1 >= H1 || w1 < 0 || w1 >= W1) ? 0 : im[((n*H1+h1)*W1+w1)*C1+c1];
    }
}


#ifndef INCLUDE_EIGEN
#define INCLUDE_EIGEN
#include <Eigen/Dense>
#endif

void tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(const int * meta_buffer)
{
    float *A = (static_buffer + meta_buffer[0]);
    float *B = (static_buffer + meta_buffer[1]);
    float *C = (static_buffer + meta_buffer[2]);

    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > a_mat(A, meta_buffer[3], meta_buffer[5]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::ColMajor> > b_mat(B, meta_buffer[5], meta_buffer[4]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > c_mat(C, meta_buffer[3], meta_buffer[4]);

    c_mat.noalias() = a_mat * b_mat;
}


void fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int v4 = meta_buffer[3];
    const int v5 = meta_buffer[4];
    const int D0 = meta_buffer[5];
    const int D1 = meta_buffer[6];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v6 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v7 = v2[d0 + d1*v4];
            float v8;
            {
                v8 = v7 + v6;
            }
            float v9;
            {
                v9 = v8 > 0 ? v8 : 0;
            }
            v3[d0 + d1*v5] = v9;
        }
    }
}


void maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = -1e7;
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;

            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v = v > X[((n * H1 + h1) * W1 + w1) * C + c] ? v : X[((n * H1 + h1) * W1 + w1) * C + c];
            }
        }

        Y[gid] = v;
    }
}


void fusedelementwise_ed8163e6334b62b7e237abe4ab67eda0d3bcac5e83594d63f5216a4e(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v8 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v2[d0 + d1*v5];
            const float v10 = v3[d0 + d1*v6];
            float v11;
            {
                v11 = v10 + v9;
            }
            float v12;
            {
                v12 = v11 + v8;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            v4[d0 + d1*v7] = v13;
        }
    }
}


void fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v8 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v2[d0 + d1*v5];
            const float v10 = v3[d0 + d1*v6];
            float v11;
            {
                v11 = v9 + v10;
            }
            float v12;
            {
                v12 = v8 + v11;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            v4[d0 + d1*v7] = v13;
        }
    }
}


void fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v8 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v2[d0 + d1*v5];
            const float v10 = v3[d0 + d1*v6];
            float v11;
            {
                v11 = v10 + v9;
            }
            float v12;
            {
                v12 = v8 + v11;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            v4[d0 + d1*v7] = v13;
        }
    }
}


void fusedelementwise_965d8d3ad02bfb2f7e604c0a789c4fea70566ad69fb364c579fef1ea(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v8 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v2[d0 + d1*v5];
            const float v10 = v3[d0 + d1*v6];
            float v11;
            {
                v11 = v9 + v10;
            }
            float v12;
            {
                v12 = v11 + v8;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            v4[d0 + d1*v7] = v13;
        }
    }
}


void averagepooling2d_167ba3530ad0582a26158b6cba3a2591c52450ea74d70f4957952ea5(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];

    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = 0;
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;

            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v += X[((n * H1 + h1) * W1 + w1) * C + c];
            }
        }
        v /= KH * KW;

        Y[gid] = v;
    }
}


void elementwiseadd_98450d361d3b8b06ad718e1e961bda61506f2baab3157c18aecbf897(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int D0 = meta_buffer[3];
    int d0;
    for (d0 = 0; d0 < D0; d0 += 1) {
        const float v4 = v1[d0];
        const float v5 = v2[d0];
        float v6;
        {
            v6 = v5 + v4;
        }
        v3[d0] = v6;
    }
}


void softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int C = meta_buffer[3];

    for (int n = 0; n < N; n++) {
        float set_max = X[n * C];
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            if (val > set_max) {
                set_max = val;
            }
        }

        float sum_exp = 0.0F;
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            float exp_x = expf(val - set_max);
            sum_exp += exp_x;
            Y[n * C + c] = exp_x;
        }

        for (int c = 0; c < C; c++) {
            Y[n * C + c] /= sum_exp;
        }
    }
}

extern "C" void run() {
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_0);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_1);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_2);
maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(meta_buf_3);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_4);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_5);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_6);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_7);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_8);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_9);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_10);
fusedelementwise_ed8163e6334b62b7e237abe4ab67eda0d3bcac5e83594d63f5216a4e(meta_buf_11);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_12);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_13);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_14);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_15);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_16);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_17);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_18);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_19);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_20);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_21);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_22);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_23);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_24);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_25);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_26);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_27);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_28);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_29);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_30);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_31);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_32);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_33);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_34);
fusedelementwise_ed8163e6334b62b7e237abe4ab67eda0d3bcac5e83594d63f5216a4e(meta_buf_35);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_36);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_37);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_38);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_39);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_40);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_41);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_42);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_43);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_44);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_45);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_46);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_47);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_48);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_49);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_50);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_51);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_52);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_53);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_54);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_55);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_56);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_57);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_58);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_59);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_60);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_61);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_62);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_63);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_64);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_65);
fusedelementwise_965d8d3ad02bfb2f7e604c0a789c4fea70566ad69fb364c579fef1ea(meta_buf_66);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_67);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_68);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_69);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_70);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_71);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_72);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_73);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_74);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_75);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_76);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_77);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_78);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_79);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_80);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_81);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_82);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_83);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_84);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_85);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_86);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_87);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_88);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_89);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_90);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_91);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_92);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_93);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_94);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_95);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_96);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_97);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_98);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_99);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_100);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_101);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_102);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_103);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_104);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_105);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_106);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_107);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_108);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_109);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_110);
fusedelementwise_965d8d3ad02bfb2f7e604c0a789c4fea70566ad69fb364c579fef1ea(meta_buf_111);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_112);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_113);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_114);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_115);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_116);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_117);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_118);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_119);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_120);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_121);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_122);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_123);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_124);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_125);
averagepooling2d_167ba3530ad0582a26158b6cba3a2591c52450ea74d70f4957952ea5(meta_buf_126);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_127);
elementwiseadd_98450d361d3b8b06ad718e1e961bda61506f2baab3157c18aecbf897(meta_buf_128);
softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(meta_buf_129);

}

