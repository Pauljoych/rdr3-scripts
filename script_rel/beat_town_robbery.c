#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	char[] cLocal_14[8] = 0;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	char* sLocal_19 = NULL;
	struct<13> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 40;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	struct<2> Local_360[40];
	struct<193> Local_441 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_634 = 0;
	struct<8> Local_635 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_643[4];
	struct<23> Local_692 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	struct<23> Local_717 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	int iLocal_742[4] = { 0, 0, 0, 0 };
	var uLocal_747[4] = { 0, 0, 0, 0 };
	struct<32> Local_752[4];
	bool bLocal_881 = false;
	int iLocal_882 = 0;
	vector3 vLocal_883 = { 0f, 0f, 0f };
	vector3 vLocal_886 = { 0f, 0f, 0f };
	vector3 vLocal_889 = { 0f, 0f, 0f };
	vector3 vLocal_892 = { 0f, 0f, 0f };
	vector3 vLocal_895 = { 0f, 0f, 0f };
	vector3 vLocal_898 = { 0f, 0f, 0f };
	vector3 vLocal_901 = { 0f, 0f, 0f };
	vector3 vLocal_904 = { 0f, 0f, 0f };
	vector3 vLocal_907 = { 0f, 0f, 0f };
	int iLocal_910 = 0;
	var uLocal_911 = 0;
	struct<4> Local_912 = { 0, 0, 0, 0 } ;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	struct<4> Local_924 = { 0, 0, 0, 0 } ;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	bool bLocal_936 = false;
	int iLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 1065353216;
	var uLocal_943 = 1065353216;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 1065353216;
	var uLocal_948 = 1065353216;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 1065353216;
	var uLocal_953 = 1065353216;
	var uLocal_954 = 0;
	var uLocal_955 = 1040187392;
	var uLocal_956 = 1040187392;
	var uLocal_957 = -1;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = -1082130432;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	struct<24> Local_979 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	int iLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = -1;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 1097859072;
	var uLocal_1031 = 1000;
	var uLocal_1032 = 1067450368;
	var uLocal_1033 = 5000;
	var uLocal_1034 = 42;
	var uLocal_1035 = 1103626240;
	var uLocal_1036 = 1077936128;
	var uLocal_1037 = 1106247680;
	var uLocal_1038 = 1103101952;
	var uLocal_1039 = 1097859072;
	var uLocal_1040 = 1103626240;
	int iLocal_1041 = 0;
	var uLocal_1042 = 0;
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	struct<21> Local_1046[3];
	struct<17> Local_1110[2];
	struct<17> Local_1145[2];
	struct<17> Local_1180[2];
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	var uLocal_1222 = 0;
	struct<97> Local_1223 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_1320 = { 0f, 0f, 0f };
	float fLocal_1323 = 0f;
	float fLocal_1324 = 0f;
	var uLocal_1325 = 0;
	float fLocal_1326 = 0f;
	float fLocal_1327 = 0f;
	float fLocal_1328 = 0f;
	float fLocal_1329 = 0f;
	float fLocal_1330 = 0f;
	float fLocal_1331 = 0f;
	bool bLocal_1332 = false;
	bool bLocal_1333 = false;
	var uLocal_1334 = 0;
	bool bLocal_1335 = false;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	int iLocal_1345 = 0;
	int iLocal_1346 = 0;
	int iLocal_1347 = 0;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	bool bLocal_1353 = false;
	bool bLocal_1354 = false;
	int iLocal_1355 = 0;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	int iLocal_1358 = 0;
	bool bLocal_1359 = false;
	int iLocal_1360 = 0;
	int iLocal_1361 = 0;
	int iLocal_1362 = 0;
	int iLocal_1363 = 0;
	int iLocal_1364 = 0;
	int iLocal_1365 = 0;
	int iLocal_1366 = 0;
	int iLocal_1367 = 0;
	int iLocal_1368 = 0;
	int iLocal_1369 = 0;
	int iLocal_1370 = 0;
	int iLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	int iLocal_1374 = 0;
	int iLocal_1375 = 0;
	int iLocal_1376 = 0;
	int iLocal_1377 = 0;
	int iLocal_1378 = 0;
	int iLocal_1379 = 0;
	int iLocal_1380 = 0;
	bool bLocal_1381 = false;
	int iLocal_1382 = 0;
	int iLocal_1383 = 0;
	int iLocal_1384 = 0;
	int iLocal_1385 = 0;
	int iLocal_1386 = 0;
	int iLocal_1387 = 0;
	int iLocal_1388 = 0;
	int iLocal_1389 = 0;
	int iLocal_1390 = 0;
	int iLocal_1391 = 0;
	int iLocal_1392 = 0;
	int iLocal_1393 = 0;
	int iLocal_1394 = 0;
	int iLocal_1395 = 0;
	int iLocal_1396 = 0;
	struct<4> Local_1397 = { 0, 0, 0, 0 } ;
	var uLocal_1401 = 0;
	var uLocal_1402 = 1065353216;
	var uLocal_1403 = 1119092736;
	var uLocal_1404 = 1092616192;
	var uLocal_1405 = 1085276160;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	int iLocal_1464 = 0;
	int iLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	int iLocal_1469 = 0;
	int iLocal_1470 = 0;
	int iLocal_1471 = 0;
	int iLocal_1472 = 0;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	struct<7> Var3;
	int iVar10;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_14 = "CALL";
	sLocal_15 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	sLocal_16 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	sLocal_17 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_VARIATIONS";
	sLocal_18 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER";
	sLocal_19 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM";
	fLocal_1324 = 125f;
	fLocal_1328 = 15f;
	fLocal_1329 = 0f;
	fLocal_1330 = 5f;
	fLocal_1331 = 3f;
	iLocal_1352 = 1;
	iLocal_1355 = 1;
	iLocal_1361 = 1;
	iLocal_1363 = 1;
	iLocal_1368 = 1;
	iLocal_1376 = 1;
	iLocal_1379 = 1;
	iLocal_1380 = 1;
	iLocal_1386 = 5000;
	iLocal_1391 = 1;
	iLocal_1479 = -1;
	Local_441.f_3 = func_1(&vScriptParam_0);
	Local_441.f_43 = func_2();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1381 = true;
		iLocal_1348 = 1;
	}
	if (!bLocal_1381)
	{
		Local_441.f_161 = func_3(vScriptParam_0.z, 2);
		func_4();
		func_5();
		func_6();
		func_7();
		Local_441.f_161 = func_3(vScriptParam_0.z, 2);
		Local_441.f_3 = func_1(&vScriptParam_0);
		func_8(&Local_441, 1);
		func_9(&(Local_441.f_5));
		func_9(&uLocal_1013);
		func_10(&uLocal_1013, 0);
		uLocal_1042 = uLocal_1042;
		func_11(&iLocal_35, 4);
		func_11(&iLocal_35, 2);
		Local_441.f_176 = 1;
	}
	Var3.f_3 = 1065353216;
	Var3.f_4 = -1;
	Var3.f_5 = 1048576000;
	Var3.f_6 = 1193033728;
	while (true)
	{
		func_13(bLocal_1381, 2610, 0);
		if (bLocal_1381)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1045)
			{
				case 0:
					if (func_14())
					{
						iLocal_1045 = 1;
					}
					break;
				case 1:
					if (func_15(&Local_441, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_16(&Local_441, &uLocal_1489, &uLocal_1488);
						func_17(&Local_1223);
						iLocal_1387 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iLocal_36) / 2f));
						func_18(&uLocal_1467, &uLocal_1483, Local_1223.f_84, Local_1223.f_87, Local_1223.f_90, 0, 0, 1, 0, 0);
						func_19();
						iLocal_1045 = 3;
					}
					else if (Local_441.f_160)
					{
						func_12();
					}
					break;
				case 3:
					if (func_20())
					{
						func_21();
						func_22();
						func_23();
						iLocal_1045 = 4;
					}
					break;
				case 4:
					if (iLocal_1337 != 0)
					{
					}
					else if (func_24())
					{
						func_25();
					}
					if (!func_26(&Local_441, &iLocal_742, iLocal_38, 0, 1, 0, 1, 0))
					{
						if (iLocal_1044 != 35 && iLocal_1044 != 36)
						{
							func_12();
						}
					}
					if (!Local_441.f_46 && iLocal_1346 == 0)
					{
						if (iLocal_1389 > 0 && func_27(iLocal_742[3], 0, 1))
						{
							PED::SET_PED_RESET_FLAG(iLocal_742[3], 42, true);
						}
						switch (iLocal_1392)
						{
							case 0:
								if (func_28(iLocal_742[0], 0, &(Local_441.f_5), &iLocal_1215, 0, 0) || PED::IS_PED_RAGDOLL(iLocal_742[0]))
								{
									if (iLocal_1215 == 65536 && !PED::IS_PED_RAGDOLL(iLocal_742[0]))
									{
										if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
										{
											if (!bLocal_1354)
											{
												func_29();
											}
											else if (func_30(&uLocal_1424) >= 5.5f)
											{
												func_31();
												Local_441.f_46 = 1;
											}
										}
									}
									else
									{
										if (iLocal_1044 > 17)
										{
											bLocal_1335 = true;
										}
										iLocal_1044 = 29;
										Local_441.f_46 = 1;
									}
								}
								if (iLocal_38 != 0)
								{
								}
								else
								{
									iLocal_1392 = 1;
								}
								break;
							case 1:
								if (iLocal_1362 == 0 && ((func_28(iLocal_742[1], 0, &(Local_441.f_5), &iLocal_1215, 0, 0) || PED::IS_PED_RAGDOLL(iLocal_742[1])) || (!func_32(iLocal_742[1], 1435919172) && iLocal_1044 >= 2)))
								{
									iLocal_1044 = 29;
									func_33(&iLocal_35, -2147483648);
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
									Local_441.f_46 = 1;
								}
								if (iLocal_1389 > 0 && iLocal_1361 == 1)
								{
									iLocal_1392++;
								}
								else
								{
									iLocal_1392 = 0;
								}
								break;
							case 2:
								if (iLocal_1389 > 0 && iLocal_1361 == 1)
								{
									if (func_28(iLocal_742[3], 0, &uLocal_1013, &iLocal_1215, 0, 0))
									{
										iVar10 = 1;
										if (iLocal_1215 == 8192 || iLocal_1215 == 16384)
										{
											if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_742[3], iLocal_742[2], 17) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_742[3], Global_35, 17))
											{
												iVar10 = 0;
											}
										}
										if (iVar10 != 1)
										{
										}
										else
										{
											func_34(joaat("CRIME_ASSAULT"), iLocal_742[3], 1, 2f);
											func_36(iLocal_742[3], Global_35, func_35("GET_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
											iLocal_1361 = 0;
										}
									}
								}
								iLocal_1392 = 0;
								break;
						}
						if ((((func_37(iLocal_35, 4) && (iLocal_1394 >= 4 || (iLocal_1394 >= 2 && func_38(iLocal_742[0], 1, 1) > 18f))) && (iLocal_1044 > 6 || ((iLocal_1044 == 3 && bLocal_881 == 1) && func_30(&uLocal_1433) > 10f))) && !func_37(iLocal_35, 256)) || (func_37(iLocal_35, 2048) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)))
						{
							iLocal_1044 = 29;
							func_39(iLocal_742[0], 0);
							Local_441.f_46 = 1;
							iLocal_1391 = 5;
							iLocal_1344 = 1;
						}
					}
					if (!func_27(iLocal_742[0], 0, 1) || bLocal_1332)
					{
						if (iLocal_1044 != 35 && iLocal_1044 != 36)
						{
							func_12();
						}
					}
					func_40(&uLocal_1484, &uLocal_1406, 8f, 0);
					if (iLocal_1382 == 0)
					{
					}
					else
					{
						iLocal_1383 = 0;
						fLocal_1326 = func_38(iLocal_742[0], 0, 1);
						if (fLocal_1326 > 30f)
						{
							iLocal_1383 = 10000;
						}
						else if (fLocal_1326 < 10f)
						{
							iLocal_1383 = -10000;
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_1382) > (20000 - iLocal_1383) && !func_37(iLocal_35, 524288))
						{
							if ((((fLocal_1326 < 30f && iLocal_1340 == 1) && iLocal_1388 == 3) && func_41(0, 1, 0, 0)) || fLocal_1326 > 30f)
							{
								Var3 = { Local_1223.f_93 };
								Var3.f_3 = 1f;
								Var3.f_4 = -1;
								Var3.f_5 = 0.25f;
								Var3.f_6 = Local_1223.f_96;
								func_36(iLocal_742[0], Global_35, func_35("IGNORE"), "", 30f, 0, 1, 0, 1, 1, 1, 291934926, 1, 0, 0);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
								TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var3);
								func_42(0, joaat("WORLD_HUMAN_SMOKE"), -1, 1, 0, -1082130432 /* Float: -1f */);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1219);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
								PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
								iLocal_1044 = 33;
								func_43(&(Local_1046[0 /*21*/]), 0);
								iLocal_978 = 3;
								fLocal_1330 = 15f;
								func_44(&(Local_1110[0 /*17*/]), 0, 0);
								func_44(&(Local_1110[1 /*17*/]), 0, 0);
								iLocal_1366 = 0;
								iLocal_1367 = 0;
								iLocal_1363 = 1;
								func_45();
								iLocal_1352 = 0;
								func_46(&(uLocal_747[0]));
								func_33(&iLocal_35, 524288);
							}
						}
					}
					if (iLocal_1385 != 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_1385 + 30000)
						{
							TASK::TASK_WANDER_STANDARD(iLocal_742[0], 40000f, 0);
							iLocal_1352 = 0;
							func_46(&(uLocal_747[0]));
							func_12();
						}
					}
					if (func_47())
					{
						Local_441.f_50 = 1;
						if (iLocal_1044 != 35 && iLocal_1044 != 36)
						{
							func_12();
						}
					}
					if (iLocal_1044 != 35 && iLocal_1044 != 36)
					{
						if (func_48(&Local_441, &iLocal_742, 1, 1, 0, bLocal_1353, 1, 1, 0, 0, 0, 0, 0))
						{
							iLocal_1348 = 1;
							func_12();
						}
					}
					if (fLocal_1323 == 0f)
					{
					}
					else if (func_49(Global_35, vLocal_1320, 1) > (fLocal_1324 + fLocal_1323))
					{
						if (iLocal_1044 != 35 && iLocal_1044 != 36)
						{
							iLocal_1348 = 1;
							func_12();
						}
					}
					break;
			}
			BUILTIN::WAIT(Local_441.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

int func_2()
{
	return Global_1894899.f_2;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4()
{
	int iVar0;

	iVar0 = func_50(Local_441.f_3, 2, 0);
	iLocal_38 = iVar0;
	if ((func_51(115, 6) == 0 || func_51(115, 1) == 1) || func_51(115, 3) == 1)
	{
		iLocal_38 = 0;
	}
	else
	{
		iLocal_38 = 1;
	}
}

void func_5()
{
	Local_635.f_4 = "script@beat@town@townRobbery@initial_callover";
	Local_635.f_6 = "script@beat@town@townRobbery@interior_grapple";
	Local_635.f_7 = "script@beat@town@townRobbery@handover_money";
}

void func_6()
{
	Local_643[0 /*12*/].f_7 = joaat("P_CIGARETTE01X");
	Local_643[1 /*12*/].f_7 = joaat("P_FOLDEDBILLS01X");
	Local_643[2 /*12*/].f_7 = joaat("P_FOLDEDBILLS01X");
	Local_643[3 /*12*/].f_7 = joaat("P_DRESSER03X");
}

void func_7()
{
	Local_692 = { 0f, 0f, 0f };
	Local_692.f_3 = Global_35;
	Local_692.f_8 = 4;
	Local_692.f_4 = 21030;
	Local_692.f_19 = 4;
	Local_692.f_20 = 4;
	Local_692.f_21 = 4;
	Local_692.f_22 = 4;
	Local_692.f_7 = -1;
	Local_717 = { 0f, 0f, 0f };
	Local_717.f_3 = iLocal_742[0];
	Local_717.f_8 = 4;
	Local_717.f_4 = 21030;
	Local_717.f_19 = 4;
	Local_717.f_20 = 4;
	Local_717.f_21 = 4;
	Local_717.f_22 = 4;
	Local_692.f_7 = 0;
}

void func_8(var uParam0, bool bParam1)
{
	func_9(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_52("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_9(int iParam0)
{
	func_53(iParam0, 0);
	func_54(iParam0, 0);
	func_55(iParam0, 1);
	func_10(iParam0, 1);
	func_56(iParam0, 0);
	func_57(iParam0, 1);
	func_58(iParam0, 1, 1, 1);
}

void func_10(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_59(iParam0, 16);
	}
	else
	{
		func_60(iParam0, 67108864);
		func_60(iParam0, 16);
	}
}

void func_11(int iParam0, int iParam1)
{
	func_61(iParam0, iParam1);
}

void func_12()
{
	int iVar0;

	if (iLocal_1346 == 0 || iLocal_1348 == 1)
	{
		func_33(&iLocal_35, 524288);
		iLocal_1044 = 35;
		if (iLocal_1336 == 0)
		{
			iLocal_1336 = 1;
		}
		if (iLocal_1358 == 1)
		{
			LAW::_0x710448D44A64C213(1);
			LAW::_0xC805EB785824F712(1);
			iLocal_1358 = 0;
		}
		if (func_27(iLocal_742[2], 0, 0))
		{
			LAW::_0xFFEBE5AA96BC2E4E(iLocal_742[2], joaat("CRIME_UNARMED_ASSAULT"), 0);
		}
		ENTITY::_0xD2B9C78537ED5759(uLocal_1222);
		func_62();
		if (func_37(iLocal_35, 33554432))
		{
			if (func_27(Global_35, 0, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
				func_11(&iLocal_35, 33554432);
			}
		}
		if (iLocal_1373 == 1)
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(func_63(16));
			iLocal_1373 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[3]))
				{
					func_64(&(iLocal_742[3]));
				}
				else
				{
					TASK::TASK_WANDER_IN_AREA(iLocal_742[3], -325.6645f, 771.7883f, 116.436f, 7f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
					PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[3]));
				}
			}
			func_65(79, 1);
		}
		if (iLocal_38 == 0 && func_37(iLocal_35, 536870912))
		{
			if (iLocal_1371 == 0 && iLocal_1372 == 0)
			{
				iLocal_1372 = 1;
				func_66(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iLocal_742[0], 0, 1065353216 /* Float: 1f */, 0);
			}
		}
		if (AUDIO::PREPARE_MUSIC_EVENT("RETR_STOP"))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("RETR_STOP"))
			{
			}
		}
		func_67(iLocal_1478);
		func_67(iLocal_1474);
		if (iLocal_1342 == 1 && !func_37(iLocal_35, 536870912))
		{
			func_68();
		}
		if ((iLocal_1357 == 1 && !func_37(iLocal_35, 536870912)) && iLocal_38 == 0)
		{
			iVar0 = 0;
			iVar0 = func_51(115, 5);
			iVar0++;
			func_69(115, 5, iVar0);
			if (iVar0 >= 2)
			{
				func_70(115, 0, 3, 0, 0);
				Local_441.f_44 = 1;
				if (!func_71())
				{
					func_69(115, 4, 1);
				}
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1477))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1477);
		}
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_937))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_937);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1475))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1475);
			func_67(iLocal_1475);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1471))
		{
			func_72(&iLocal_1471);
		}
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", true);
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", true);
		iLocal_1352 = 0;
		func_46(&(uLocal_747[0]));
		if (func_27(iLocal_742[0], 0, 1))
		{
			func_73(iLocal_742[0]);
		}
		if (iLocal_1342 == 1 && iLocal_1343 == 0)
		{
			iLocal_1343 = 1;
			func_74(&Global_1935630, 4);
			func_75(115);
		}
		if (iLocal_1357 == 0)
		{
			Local_441.f_45 = 0;
			func_76(&Local_441);
		}
		MAP::DISPLAY_RADAR(true);
		func_77(&uLocal_1466, &uLocal_1481);
		func_77(&uLocal_1467, &uLocal_1483);
		if (MISC::_0x0D0AE5081F88CFE1(Local_20.f_12))
		{
			MISC::_0x154340E87D8CC178(Local_20.f_12);
		}
		if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_MONEYSTACK")))
		{
			MISC::_0x154340E87D8CC178(joaat("REWARD_MONEYSTACK"));
		}
		func_45();
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_20))
		{
			TASK::_DELETE_SCENARIO_POINT(Local_20);
		}
		func_78();
		func_79();
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1220))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_1220);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1221))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_1221);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1472))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1472);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1473))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1473);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1474))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1474);
		}
		STREAMING::_0x9F348DE670423460(sLocal_15);
		STREAMING::_0x9F348DE670423460(sLocal_16);
		STREAMING::_0x9F348DE670423460(sLocal_17);
		STREAMING::_0x9F348DE670423460(sLocal_18);
		STREAMING::_0x9F348DE670423460(sLocal_19);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1476))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1476);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1476))
			{
				VOLUME::_DELETE_VOLUME(iLocal_1476);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
		{
			func_80(&(iLocal_742[3]), 0);
			PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_643[2 /*12*/].f_8))
		{
			if (!OBJECT::IS_OBJECT_VISIBLE(Local_643[2 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_643[2 /*12*/].f_8));
			}
		}
		if (iLocal_1380 == 0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			iLocal_1380 = 1;
		}
		func_81(183181940, 0, 0f, 0, 0, 0f, 0, 0);
		if (iLocal_1348 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]))
			{
				if (func_82(iLocal_742[0], 1))
				{
					if (iLocal_1374 == 0)
					{
						func_70(115, 0, 2, 0, 0);
					}
					iLocal_1044 = 36;
				}
			}
			else
			{
				iLocal_1044 = 36;
			}
			iLocal_1347 = 1;
			func_83(&Local_441, &iLocal_742, &uLocal_747, iLocal_38, uLocal_1489, uLocal_1488, 0, 1, 0, 1);
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

void func_13(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_84(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_14()
{
	int iVar0;

	switch (iLocal_1043)
	{
		case 0:
			if (func_85(&Local_441))
			{
				func_86();
				func_87();
				func_88();
				func_89(&Local_643);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_15);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_16);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_17);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_18);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_19);
				iLocal_1043 = 1;
			}
			break;
		case 1:
			if (!func_90(&uLocal_1042, cLocal_14))
			{
				return false;
			}
			if (!func_91(&uLocal_39))
			{
				return false;
			}
			if (!func_92(&Local_643))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_15))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_16))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_17))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_18))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_19))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_752[iVar0 /*32*/].f_1))
				{
					return false;
				}
				iVar0++;
			}
			if (!func_93(&Local_752))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_15(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_94(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_95(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_96(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_97(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_98(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
	}
}

void func_17(var uParam0)
{
	func_99(uParam0);
	vLocal_883 = { -323.387f, 758.965f, 116.472f };
	vLocal_886 = { -323.387f, 758.9651f, 116.4372f };
	vLocal_889 = { 0f, 0f, -170f };
	iLocal_36 = 5000;
	if (func_37(iLocal_35, 2) || func_37(iLocal_35, 4))
	{
		Local_20.f_3 = { vLocal_883 };
		Local_20.f_6 = 167.9709f;
		Local_20.f_12 = joaat("S_LOOTABLEMISCCHEST");
	}
	else
	{
		Local_20.f_3 = { -322.891f, 759.959f, 116.436f };
		Local_20.f_6 = -77.89f;
		Local_20.f_12 = joaat("S_LOOTABLEPOORCASE");
	}
}

void func_18(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_100(iParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_101(iParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_102(iParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_103(iParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*iParam0, 0, 15);
		}
	}
}

void func_19()
{
	func_104();
}

bool func_20()
{
	switch (iLocal_1041)
	{
		case 0:
			if ((iLocal_38 == 0 && func_107(func_105(&Local_441), func_106(&Local_441), &Local_752, &iLocal_742, 0, 0, 1, 1)) || (iLocal_38 == 1 && func_107(func_105(&Local_441), func_106(&Local_441), &Local_752, &iLocal_742, 0, 0, 0, 1)))
			{
				if (func_27(iLocal_742[2], 0, 1))
				{
					func_64(&(iLocal_742[2]));
				}
				return true;
			}
			break;
	}
	return false;
}

void func_21()
{
	if (iLocal_38 == 0)
	{
		func_108(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		func_108(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		func_108(&(Local_1180[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		func_108(&(Local_1180[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		func_108(&(Local_1145[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_108(&(Local_1145[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_44(&(Local_1110[0 /*17*/]), 0, 0);
		func_44(&(Local_1110[1 /*17*/]), 0, 0);
		func_44(&(Local_1180[0 /*17*/]), 0, 0);
		func_44(&(Local_1180[1 /*17*/]), 0, 0);
		func_44(&(Local_1145[0 /*17*/]), 0, 0);
		func_44(&(Local_1145[1 /*17*/]), 0, 0);
		iLocal_1366 = 0;
		iLocal_1367 = 0;
		func_109(&(Local_1110[0 /*17*/]), 8);
		func_109(&(Local_1110[1 /*17*/]), 8);
	}
	else
	{
		func_108(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		func_108(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		func_44(&(Local_1110[0 /*17*/]), 0, 0);
		func_44(&(Local_1110[1 /*17*/]), 0, 0);
		iLocal_1366 = 0;
		iLocal_1367 = 0;
	}
}

void func_22()
{
	vector3 vVar0;

	Local_635 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_635.f_4, 0, 0, false, true);
	Local_635.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_635.f_6, 0, 0, false, true);
	Local_635.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_635.f_7, 64, 0, false, true);
	vVar0 = { Local_441.f_51, Local_441.f_51.f_1, (Local_441.f_51.f_2 - 1f) };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635, vVar0, 0f, 0f, Local_752[0 /*32*/].f_9, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635, "pedStranger", iLocal_742[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_2, vLocal_886, vLocal_889, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "player", Global_35, 0);
	Local_643[2 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_643[2 /*12*/].f_7, Local_441.f_51 - Vector(3f, 0f, 0f), true, true, false, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "Bills", Local_643[2 /*12*/].f_8, 0);
	OBJECT::TRACK_OBJECT_VISIBILITY(Local_643[2 /*12*/].f_8);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_3, ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_742[0], 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "pedStranger", iLocal_742[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "pedPlayer", Global_35, 0);
	Local_643[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_643[1 /*12*/].f_7, Local_441.f_51 - Vector(3f, 0f, 0f), true, true, false, false, true);
	if (iLocal_1355 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "objMoney", Local_643[1 /*12*/].f_8, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_635.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_635);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_635.f_6))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_2);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_635.f_7))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_3);
		}
	}
	iLocal_1385 = 0;
}

void func_23()
{
	if (func_27(iLocal_742[0], 0, 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_752[0 /*32*/].f_23)))
		{
			func_110(iLocal_742[0], &(Local_752[0 /*32*/].f_23), 0);
		}
		iLocal_1477 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false), 0f, 0f, 0f, 4f, 4f, 5f);
		PED::_0x7C00CFC48A782DC0(iLocal_1477, iLocal_742[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (!func_37(iLocal_35, 2) && !func_37(iLocal_35, 4))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_742[1], false);
	}
	func_111(&uLocal_938);
	func_112(iLocal_742[0], &Local_441, 0);
}

bool func_24()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_635, false))
		{
			iLocal_1339 = 1;
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_far_a_front"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_far_a_front"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_far_a_front");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_far_b_left"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_far_b_left"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_far_b_left");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_far_a_right"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_far_a_right"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_far_a_right");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_far_c_behind"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_far_c_behind"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_far_c_behind");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_near_a_front"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_near_a_front"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_near_a_front");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_near_b_left"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_near_b_left"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_near_b_left");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_near_a_right"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_near_a_right"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_near_a_right");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_near_c_behind"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_near_c_behind"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_near_c_behind");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "initial_lean_start"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "initial_lean_start"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "initial_lean_start");
					iLocal_1339 = 0;
				}
			}
			if (iLocal_1339 == 1)
			{
				iVar0 = 1;
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_635.f_3, false))
		{
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635.f_3, "pbl_handover"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635.f_3, "pbl_handover"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635.f_3, "pbl_handover");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635.f_3, "pbl_idle"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635.f_3, "pbl_idle"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635.f_3, "pbl_idle");
					iLocal_1339 = 0;
				}
			}
			if (iLocal_1339 == 1)
			{
				iVar1 = 1;
			}
		}
	}
	if (iVar0 == 1 && iVar1 == 1)
	{
		iLocal_1337 = 1;
		return true;
	}
	return false;
}

void func_25()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "initial_lean_start", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_635, "ACTION_1", false, false);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635.f_3, "pbl_idle", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_635.f_3, "idle_loop", false, false);
	}
}

bool func_26(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_113(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_114(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_115(&(uParam0->f_5));
			}
			func_59(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_116(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_117(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_118(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_119(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_120(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_96(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				func_121(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_27(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_122(iParam0, iParam1);
}

bool func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_123(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_124(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_125(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_126(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_127(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_128(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_129(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_125(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_130(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_131(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_125(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_132(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_125(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_133(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_133(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_125(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_134(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_135(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_136(iParam2, 4000))
				{
					if ((func_137(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_138(iParam2, iParam0)) && func_139(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_125(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_137(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_138(iParam2, iParam0)) && func_139(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_140(iParam0, Global_1935630.f_41))
							{
								func_141();
								*iParam3 = 2;
								func_125(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_140(iParam0, Global_1935630.f_41))
						{
							func_141();
							*iParam3 = 2;
							func_125(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_142(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_143() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_141();
						*iParam3 = 2;
						func_125(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_144())
					{
						if (func_140(iParam0, Global_1935630.f_42))
						{
							func_141();
							*iParam3 = 2;
							func_125(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_145(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_125(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_146(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_147(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_125(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_148(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_149(iParam2, 4000))
				{
					if (func_150(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_125(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_151(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_125(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_152(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_125(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_29()
{
	if ((func_41(0, 1, 0, 0) && func_37(iLocal_35, 64)) && func_30(&uLocal_1424) >= 5.5f)
	{
		func_36(iLocal_742[0], Global_35, "PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		TASK::TASK_REACT(iLocal_742[0], Global_35, 0f, 0f, 0f, "Default_Nervous", 2f, 0f, 4);
		func_153(&uLocal_1424, -2f);
		bLocal_1354 = true;
		func_154(&(Local_441.f_5), &iLocal_1215);
	}
}

float func_30(var uParam0)
{
	if (!func_155(uParam0))
	{
		return 0f;
	}
	if (func_156(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_157() - uParam0->f_1);
}

void func_31()
{
	func_36(iLocal_742[0], Global_35, func_35("AGGRO_ANNOY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	TASK::CLEAR_PED_SECONDARY_TASK(iLocal_742[0]);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
	TASK::TASK_CONFRONT(0, Global_35, 2);
	TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
	func_158(iLocal_742[0], &iLocal_1218, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
	func_33(&iLocal_35, 134217728);
	func_46(&iLocal_1217);
	func_46(&(uLocal_747[0]));
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1469))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1469);
	}
	func_159(&Local_441);
	if (MISC::_0x0D0AE5081F88CFE1(Local_20.f_12))
	{
		MISC::_0x154340E87D8CC178(Local_20.f_12);
	}
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_MONEYSTACK")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_MONEYSTACK"));
	}
	func_45();
	func_78();
	func_79();
	iLocal_1352 = 0;
	func_46(&(uLocal_747[0]));
	func_33(&iLocal_35, 1024);
	func_12();
}

bool func_32(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_33(int iParam0, int iParam1)
{
	func_160(iParam0, iParam1);
}

void func_34(int iParam0, var uParam1, int iParam2, float fParam3)
{
	if (iLocal_1350 == 0)
	{
		iLocal_1350 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]))
		{
			PED::_0xEEED8FAFEC331A70(iLocal_742[3], Global_36, 3);
			func_161(1);
			LAW::_0x710448D44A64C213(1);
			PED::SET_PED_CONFIG_FLAG(iLocal_742[3], 146, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_742[3], 148, false);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 0, 0, 0, 0, 0, 0);
			PED::_0xC6C4E15CF7D52FEA(iLocal_742[3], 1000f);
			LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), iParam0, uLocal_1463);
			AUDIO::STOP_PED_SPEAKING(iLocal_742[3], false);
			TASK::TASK_REACT(iLocal_742[3], Global_35, 0f, 0f, 0f, "Default_Shocked", 1.5f, 0f, 4);
			LAW::_0xF0B67BAD53C35BD9(iLocal_742[3], Global_35, uParam1, Global_36, iParam0);
			PED::SET_PED_KEEP_TASK(iLocal_742[3], true);
		}
	}
}

char* func_35(char* sParam0)
{
	int iVar0;

	if (iLocal_38 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_38 == 1)
	{
		iVar0 = 2;
	}
	switch (func_162())
	{
		case 4:
			return func_163("TOWNR", "BLW", sParam0, iVar0);
		case 9:
			return func_163("TOWNR", "VAL", sParam0, iVar0);
		case 10:
			return func_163("TOWNR", "VHT", sParam0, iVar0);
		default:
			break;
	}
	return "INVALID";
}

bool func_36(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_164(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_37(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_38(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_165(Global_35, iParam0, bParam1, bParam2);
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_166(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_40(char* sParam0, var uParam1, float fParam2, bool bParam3)
{
	if (func_167(uParam1, fParam2))
	{
		if (bParam3)
		{
			func_168(sParam0, 10000, 0, 0, 0, 1);
		}
		else
		{
			func_52(sParam0, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

bool func_41(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_169(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_170(fParam0))
	{
		return false;
	}
	return true;
}

void func_42(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_43(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_171(&(iParam0->f_18));
}

void func_44(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_172(iParam0, 13))
	{
		func_109(iParam0, 0);
	}
	else
	{
		func_173(iParam0, 0);
	}
	if (func_174(iParam0->f_6))
	{
		if (bParam2)
		{
			func_175(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_45()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_46(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_47()
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	int iVar16;
	struct<7> Var17;
	struct<7> Var24;
	float fVar31;
	float fVar32;
	float fVar33;

	fVar0 = 0f;
	fVar1 = 0f;
	vVar3 = { 0f, 0f, 0f };
	fVar6 = 15f;
	if (iLocal_1368 == 1)
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_742[0], 1, 1);
	}
	if (iLocal_1373 == 1)
	{
		func_176(20);
	}
	func_177();
	if (Local_441.f_46 == 0 && func_27(iLocal_742[0], 0, 1))
	{
		PED::SET_PED_RESET_FLAG(iLocal_742[0], 12, true);
		PED::SET_PED_RESET_FLAG(iLocal_742[0], 172, true);
	}
	if (iLocal_38 == 0)
	{
		func_178();
	}
	else
	{
		func_179();
	}
	func_180();
	func_181();
	func_182();
	func_183(bLocal_1359);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1469))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1469, true, 0))
		{
			func_55(&(Local_441.f_5), 0);
			if (iLocal_1350 == 0 && PED::IS_PED_SHOOTING(Global_35))
			{
				func_34(joaat("CRIME_ASSAULT"), iLocal_742[3], 1, 2f);
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1470, true, 0))
			{
				if (!func_37(iLocal_35, 8192))
				{
					if (func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						if (!func_37(iLocal_35, 67108864))
						{
							func_33(&iLocal_35, 67108864);
							TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", false);
							TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", false);
							TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", false);
						}
					}
					else if (func_37(iLocal_35, 67108864))
					{
						func_11(&iLocal_35, 67108864);
						TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", true);
						TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
						TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", true);
					}
				}
			}
			else if (!func_37(iLocal_35, 8192))
			{
				if (func_37(iLocal_35, 67108864))
				{
					func_11(&iLocal_35, 67108864);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", true);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", true);
				}
			}
			if (func_184())
			{
				func_33(&iLocal_35, 8192);
				func_185();
				if (!func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_62();
					if (AUDIO::PREPARE_MUSIC_EVENT("RETR_START"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RETR_START"))
						{
						}
					}
				}
			}
		}
		else
		{
			func_55(&(Local_441.f_5), 1);
		}
	}
	else
	{
		func_55(&(Local_441.f_5), 1);
	}
	switch (iLocal_1044)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
			{
				iLocal_1385 = 0;
				func_186();
				func_187();
				ANIMSCENE::START_ANIM_SCENE(Local_635);
				if (func_27(iLocal_742[1], 0, 1))
				{
					func_188(iLocal_742[1], joaat("WORLD_HUMAN_SMOKE"), Local_1223.f_3, Local_1223.f_14, -1, 0, 1, "WORLD_HUMAN_SMOKE_MALE_A", -1082130432 /* Float: -1f */);
				}
				if (iLocal_38 == 0)
				{
					if (!func_71() && func_51(115, 3) == 1)
					{
						func_33(&iLocal_35, 8);
					}
					if (func_71() && func_189(115, 3) == 1)
					{
						func_33(&iLocal_35, 8);
					}
				}
				else
				{
					func_33(&iLocal_35, 4);
					func_190(iLocal_742[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_191(iLocal_742[1], 1f, -1082130432 /* Float: -1f */, 0, 1);
					func_192(iLocal_742[1], 0);
					iLocal_742[1] = 0;
				}
				iLocal_1044 = 2;
			}
			else
			{
				if (iLocal_1385 == 0)
				{
					iLocal_1385 = MISC::GET_GAME_TIMER();
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635, true, false))
				{
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
				{
				}
			}
			break;
		case 2:
			vVar3 = { func_193(Global_35, 2f) };
			if (iLocal_38 == 0)
			{
				fVar6 = 15f;
			}
			else
			{
				fVar6 = 15f;
			}
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 7f)
			{
				fVar6 = (fVar6 + 15f);
			}
			if ((!func_194(vVar3) && func_49(iLocal_742[0], vVar3, 1) < fVar6) && func_195(&Local_441, 3f, fVar6, fVar6, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				iLocal_1044 = 4;
			}
			break;
		case 4:
			vVar3 = { func_193(Global_35, 2f) };
			if (iLocal_38 == 0)
			{
				fVar6 = 15f;
			}
			else
			{
				fVar6 = 15f;
			}
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 7f)
			{
				fVar6 = (fVar6 + 15f);
			}
			if (!func_194(vVar3) && func_49(iLocal_742[0], vVar3, 1) < fVar6)
			{
				if (func_196())
				{
					func_197(&uLocal_1415, 0);
					iLocal_1044 = 3;
				}
			}
			break;
		case 3:
			if (iLocal_1375 == 0)
			{
				if (iLocal_38 == 1)
				{
					func_198();
				}
				else if (iLocal_38 == 0)
				{
					func_199();
				}
			}
			if (func_167(&uLocal_1415, 3f))
			{
				func_44(&(Local_1110[0 /*17*/]), 1, 0);
				func_44(&(Local_1110[1 /*17*/]), 1, 0);
			}
			if (func_30(&uLocal_1433) > 1f && func_200(iLocal_1479, 1, 1))
			{
				func_201(iLocal_742[0], &Local_1397, 0f, 0f, 0f, 1, 30f, 15f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
			}
			if (iLocal_38 == 0)
			{
				if (((VOLUME::_DOES_VOLUME_EXIST(iLocal_1473) && ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1473, true, 0) && func_165(iLocal_742[0], Global_35, 1, 1) < 5.25f) || iLocal_1375 == 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
				{
					iLocal_1357 = 1;
					iLocal_1044 = 5;
					func_171(&uLocal_1415);
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
				}
			}
			else if (iLocal_38 == 1)
			{
				if (((((VOLUME::_DOES_VOLUME_EXIST(iLocal_1473) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1473, true, 0)) || func_165(iLocal_742[0], Global_35, 1, 1) < 3.5f) || iLocal_1375 == 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_742[0]) >= 1 || func_32(iLocal_742[0], -875674219))
					{
						iLocal_1357 = 1;
						iLocal_1044 = 5;
						func_171(&uLocal_1415);
						func_44(&(Local_1110[0 /*17*/]), 0, 0);
						func_44(&(Local_1110[1 /*17*/]), 0, 0);
					}
				}
			}
			break;
		case 5:
			if (!func_202())
			{
				func_203();
				func_201(iLocal_742[0], &Local_1397, 0f, 0f, 0f, 1, 30f, 10f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
				if (func_204(iLocal_742[0], &iLocal_882, -1, 0))
				{
					if (func_37(iLocal_35, 4))
					{
						func_205(iLocal_742[0], Global_35, Local_360[15 /*2*/], Local_360[15 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
						func_206();
					}
					else if (func_37(iLocal_35, 8))
					{
						func_36(iLocal_742[0], Global_35, func_35("EASYMONEY_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_197(&uLocal_1436, 0);
					}
					else
					{
						func_205(iLocal_742[0], Global_35, Local_360[1 /*2*/], Local_360[1 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
					}
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 10f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					iLocal_1044 = 6;
				}
			}
			break;
		case 6:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[1 /*2*/], Local_360[1 /*2*/].f_1, 1))
			{
				fVar2 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_742[0], Local_360[1 /*2*/], Local_360[1 /*2*/].f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[15 /*2*/], Local_360[15 /*2*/].f_1, 1))
			{
				fVar2 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_742[0], Local_360[15 /*2*/], Local_360[15 /*2*/].f_1);
			}
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[1 /*2*/], Local_360[1 /*2*/].f_1, 1) && fVar2 > 0.75f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[15 /*2*/], Local_360[15 /*2*/].f_1, 1) && fVar2 > 0.825f)) || (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && func_30(&uLocal_1436) > 2f))
			{
				func_45();
				func_207(iLocal_742[0], &(uLocal_747[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_747[0], "RE_INTER_STRANGER");
				if (iLocal_38 == 1)
				{
					func_197(&uLocal_1454, 0);
					func_197(&uLocal_1457, 0);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1223, 1f, -1, 0.25f, 1, 40000f);
				if (func_27(iLocal_742[1], 0, 1))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_742[1], 0, -1f, -1f, -1f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_742[1], -1, -1f, -1f, -1f);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
				func_208(&(Local_441.f_33));
				Local_692.f_3 = iLocal_742[1];
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[0], &Local_692);
				if (iLocal_38 == 1)
				{
					iLocal_978 = 1;
					func_44(&(Local_1110[0 /*17*/]), 1, 0);
					func_44(&(Local_1110[1 /*17*/]), 1, 0);
					iLocal_1366 = 1;
					iLocal_1367 = 1;
				}
				iLocal_1044 = 10;
			}
			break;
		case 7:
			if (iLocal_1382 == 0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_742[0], 242628503, true) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_742[0]) == 1)
				{
					iLocal_1382 = MISC::GET_GAME_TIMER();
				}
			}
			if (func_37(iLocal_35, 2048))
			{
				if ((func_30(&uLocal_1454) >= 5f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (iLocal_1394 == 3)
					{
						iLocal_1394++;
						func_209(&uLocal_1454);
						fLocal_1331 = 8f;
					}
				}
			}
			if (func_49(iLocal_742[0], Local_1223, 1) < 3f || (iLocal_34 != 0 && MISC::GET_GAME_TIMER() > iLocal_34 + 1000))
			{
				if ((func_41(-2f, 1, 0, 0) && func_38(iLocal_742[0], 1, 1) < 6.5f) && func_210(&(Local_441.f_33), Global_35, iLocal_742[0]))
				{
					func_43(&(Local_1046[0 /*21*/]), 0);
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					if (iLocal_882 == 0)
					{
						if (func_204(iLocal_742[0], &iLocal_882, -1, 0))
						{
							iLocal_882 = 1;
						}
					}
					if (iLocal_882 == 1 && func_211(iLocal_742[0], Global_35, 0))
					{
						iLocal_1382 = 0;
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_3, ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false) - Vector(1f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(iLocal_742[0], 2), 2);
						if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "pedStranger", iLocal_742[0], 0);
							if (iLocal_1355 == 0)
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "objMoney", Local_643[1 /*12*/].f_8, 0);
							}
						}
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_3, "pedPlayer", &Local_912, true, "pbl_handover", 2))
						{
						}
						if (func_51(115, 2) == 1)
						{
							func_36(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_LIE_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1044 = 9;
						}
						else
						{
							iLocal_1044 = 8;
							func_205(iLocal_742[0], Global_35, Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
						}
						iLocal_1384 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (PED::IS_PED_STOPPED(iLocal_742[0]))
			{
				if (iLocal_34 == 0)
				{
					iLocal_34 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 9:
			if (MISC::GET_GAME_TIMER() > iLocal_1384 + 1000 && func_41(-5f, 1, 0, 0))
			{
				func_212(0);
				func_205(iLocal_742[0], Global_35, Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
				iLocal_1384 = MISC::GET_GAME_TIMER();
				iLocal_1044 = 8;
			}
			break;
		case 8:
			if (!func_37(iLocal_35, 512))
			{
				func_33(&iLocal_35, 512);
				iLocal_1342 = 1;
			}
			if (iLocal_1391 > 1)
			{
				if (func_213(Global_35, iLocal_910, 1, 0))
				{
					if (iLocal_1356 == 0)
					{
						func_214(iLocal_742[0], Global_35, &uLocal_938, -1082130432 /* Float: -1f */, "angry", 0, -1082130432 /* Float: -1f */, 5f, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
						iLocal_1356 = 1;
					}
				}
				else if (iLocal_1356 == 1)
				{
					func_215(iLocal_742[0], 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_742[0], Global_35, -1, -1f, -1f, -1f);
					iLocal_1356 = 0;
				}
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
			{
				if (iLocal_1364 == 0)
				{
					iLocal_1364 = 1;
					if (func_216(1) >= iLocal_1387)
					{
						iLocal_1363 = 0;
						PED::_0x923583741DC87BCE(iLocal_742[0], "default");
						func_217(&(Local_1110[0 /*17*/]), "ROB_GIVE", iLocal_1387, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
						func_218(iLocal_742[0], &(Local_1110[0 /*17*/]), 15f, 3, 0, 0, 0, 0);
						func_219(&(Local_1110[1 /*17*/]), "ROB_REFUSE");
						iLocal_978 = 2;
						func_43(&(Local_1046[0 /*21*/]), 0);
						func_220(&(Local_1110[0 /*17*/]), 1, 0);
						func_44(&(Local_1110[0 /*17*/]), 1, 0);
						func_44(&(Local_1110[1 /*17*/]), 1, 0);
						iLocal_1366 = 1;
						iLocal_1367 = 1;
					}
				}
				if (func_216(1) < iLocal_1387)
				{
					if (!func_37(iLocal_35, 1048576))
					{
						func_212(0);
						func_36(Global_35, iLocal_742[0], func_35("NO_MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_35, 1048576);
						func_197(&uLocal_1418, 0);
						func_44(&(Local_1110[0 /*17*/]), 0, 0);
						func_44(&(Local_1110[1 /*17*/]), 0, 0);
						iLocal_1366 = 0;
						iLocal_1367 = 0;
						iLocal_1384 = MISC::GET_GAME_TIMER();
					}
					else if (((func_37(iLocal_35, 1048576) && func_30(&uLocal_1418) > 1f) && func_41(-6f, 1, 0, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						iLocal_1044 = 29;
						func_39(iLocal_742[0], 0);
						Local_441.f_46 = 1;
						iLocal_1391 = 5;
						iLocal_1345 = 1;
						iLocal_1384 = MISC::GET_GAME_TIMER();
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_1384 + 7500 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					iLocal_1384 = MISC::GET_GAME_TIMER();
					switch (iLocal_1391)
					{
						case 1:
							TASK::TASK_PLAY_ANIM(iLocal_742[0], Local_360[17 /*2*/], Local_360[17 /*2*/].f_1, 8f, -8f, -1, 528, 0f, false, 0, false, 0, false);
							iLocal_1391++;
							break;
						case 2:
							TASK::TASK_PLAY_ANIM(iLocal_742[0], Local_360[18 /*2*/], Local_360[18 /*2*/].f_1, 8f, -8f, -1, 528, 0f, false, 0, false, 0, false);
							iLocal_1391++;
							break;
						case 3:
							TASK::TASK_PLAY_ANIM(iLocal_742[0], Local_360[19 /*2*/], Local_360[19 /*2*/].f_1, 8f, -8f, -1, 528, 0f, false, 0, false, 0, false);
							iLocal_1391++;
							break;
						case 4:
							iLocal_1044 = 29;
							func_39(iLocal_742[0], 0);
							Local_441.f_46 = 1;
							iLocal_1391++;
							break;
						case 5:
							break;
					}
				}
				if (func_38(iLocal_742[0], 1, 1) < 5f)
				{
				}
				else if (func_38(iLocal_742[0], 1, 1) > 10f)
				{
					iLocal_1044 = 29;
					func_39(iLocal_742[0], 0);
					Local_441.f_46 = 1;
					iLocal_1391 = 5;
					iLocal_1344 = 1;
				}
			}
			break;
		case 34:
			if ((func_30(&uLocal_1418) > 1f && func_41(-6f, 1, 0, 0)) && !func_32(iLocal_742[0], 2121492476))
			{
				TASK::TASK_REACT(iLocal_742[0], Global_35, 0f, 0f, 0f, "Default_Angry", 1f, 0f, 4);
			}
			if (func_30(&uLocal_1418) > 2.5f && func_41(-6f, 1, 0, 0))
			{
				iLocal_1044 = 29;
				func_39(iLocal_742[0], 0);
				Local_441.f_46 = 1;
				iLocal_1391 = 5;
			}
			break;
		case 10:
			if (func_41(-3f, 1, 0, 0))
			{
				if (func_27(iLocal_742[1], 0, 1) && func_49(iLocal_742[1], Local_752[1 /*32*/].f_6, 1) < 1.5f)
				{
					fVar7 = func_221(iLocal_742[0], iLocal_742[1]);
				}
				else
				{
					fVar7 = func_49(iLocal_742[0], Local_1223, 1);
				}
				if (iLocal_38 == 1)
				{
					iVar16 = 0;
					fVar8 = func_165(Global_35, iLocal_742[0], 1, 1);
					fVar10 = (fLocal_1331 - 2f);
					vVar13 = { func_193(Global_35, 1f) };
					fVar9 = func_49(iLocal_742[0], vVar13, 1);
					fVar11 = func_49(iLocal_742[0], Local_1223, 1);
					fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_1223, vVar13, true);
					if (fVar8 >= 6f)
					{
						if (func_49(Global_35, Local_1223, 1) <= 6f)
						{
							func_153(&uLocal_1454, fVar10);
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar13, true) < 0.25f)
						{
							iVar16 = 1;
						}
						else if (fVar9 > fVar8 && fVar12 > fVar11)
						{
							iVar16 = 1;
						}
						else
						{
							func_153(&uLocal_1454, fVar10);
						}
					}
					else
					{
						func_153(&uLocal_1454, fVar10);
					}
					if (func_30(&uLocal_1457) > 1.5f)
					{
						switch (iLocal_1395)
						{
							case 0:
								if (iVar16 == 1)
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
									TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_ANGRY", 3f, 60f, 4);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
									func_158(iLocal_742[0], &iLocal_1218, 0, 0, 1, 1);
									iLocal_1395 = 1;
									func_209(&uLocal_1457);
								}
								break;
							case 1:
								if (iVar16 == 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1223, 1f, -1, 0.25f, 1, 40000f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
									func_158(iLocal_742[0], &iLocal_1218, 0, 0, 1, 1);
									iLocal_1395 = 0;
									func_209(&uLocal_1457);
								}
								break;
						}
					}
					if (iVar16 == 1 || func_37(iLocal_35, 2048))
					{
						if ((func_30(&uLocal_1454) >= 5f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							switch (iLocal_1394)
							{
								case 0:
									func_36(iLocal_742[0], Global_35, "FFF_START", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									iLocal_1394++;
									fLocal_1331 = 5f;
									func_209(&uLocal_1454);
									break;
								case 1:
									func_36(iLocal_742[0], Global_35, "STORM_OFF", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									iLocal_1394++;
									func_209(&uLocal_1454);
									fLocal_1331 = 5f;
									break;
								case 2:
									func_36(iLocal_742[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									iLocal_1394++;
									func_209(&uLocal_1454);
									fLocal_1331 = 6f;
									break;
								case 3:
									iLocal_1394++;
									func_209(&uLocal_1454);
									fLocal_1331 = 8f;
									break;
							}
						}
					}
				}
				if (fVar7 < 3f)
				{
					func_171(&uLocal_1454);
					if (func_27(iLocal_742[1], 0, 1))
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[0], &Local_692);
						func_212(0);
						func_36(iLocal_742[0], iLocal_742[1], func_35("WALK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[10 /*2*/], Local_360[10 /*2*/].f_1, iLocal_742[1], 2166, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
						if (!func_155(&uLocal_1409))
						{
							func_197(&uLocal_1409, 0);
						}
						iLocal_1044 = 11;
					}
					else
					{
						if (!func_155(&uLocal_1409))
						{
							func_197(&uLocal_1409, 0);
						}
						iLocal_1044 = 11;
					}
				}
			}
			break;
		case 11:
			iLocal_1376 = 0;
			iLocal_882 = 0;
			iLocal_34 = 0;
			if (!func_37(iLocal_35, 16384))
			{
				if (func_155(&uLocal_1409) && func_222(&uLocal_1409) > 0.75f)
				{
					if (func_27(iLocal_742[1], 0, 1))
					{
						PED::_0xF1C03A5352243A30(iLocal_742[1]);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_742[0], 0, 256, 20f, -1, 0);
						TASK::TASK_WANDER_IN_AREA(0, -241.4613f, 769.9499f, 117.085f, 4f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
						func_158(iLocal_742[1], &iLocal_1219, 0, 0, 1, 1);
						iLocal_1362 = 1;
						PED::SET_PED_KEEP_TASK(iLocal_742[1], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_742[1], false);
						func_223(iLocal_742[1], 1088421888 /* Float: 7f */, 0, 0);
						func_224(&(iLocal_742[1]), &(Local_1046[0 /*21*/]), &Local_1180, 0, 1);
						PED::_0x24C82EF607105FAA(iLocal_742[1], joaat("TIMID"));
						PED::_0xB8B6430EAD2D2437(iLocal_742[1], 673924189);
						PED::_0xE737D5F14304A2EC(iLocal_742[1], PLAYER::GET_PLAYER_INDEX(), 120000);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_742[1], 7, 0, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_742[1], 413, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_742[1], 330, true);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_742[0]);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_742[0], Global_35, 5000, 0, 51, 0);
					}
					Local_692.f_3 = Global_35;
					func_33(&iLocal_35, 16384);
				}
			}
			if (func_222(&uLocal_1409) > 0f)
			{
				iLocal_1376 = 1;
				Local_692.f_3 = Global_35;
			}
			if (func_37(iLocal_35, 4))
			{
				iLocal_882 = 0;
				Local_692.f_3 = Global_35;
				iLocal_1044 = 7;
			}
			else if (func_37(iLocal_35, 2) || (func_155(&uLocal_1409) && func_222(&uLocal_1409) > 4f))
			{
				iLocal_1382 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[1]))
				{
					PED::_0x39A2FC5AF55A52B1(iLocal_742[1], -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[1]));
				}
				Local_692.f_3 = Global_35;
				iLocal_1044 = 12;
			}
			break;
		case 12:
			Local_692.f_3 = Global_35;
			if (func_49(iLocal_742[0], Local_1223, 1) < 3f || (iLocal_34 != 0 && MISC::GET_GAME_TIMER() > iLocal_34 + 500))
			{
				Local_692.f_7 = 0;
				if (((func_41(-3f, 1, 0, 0) && func_38(iLocal_742[0], 1, 1) < 5f) && func_225(iLocal_742[0], &(Local_441.f_33), &uLocal_1325, &uLocal_1334, 2f, 10f, 0, 0, 1092616192 /* Float: 10f */, 1)) && func_210(&(Local_441.f_33), Global_35, iLocal_742[0]))
				{
					Local_692.f_3 = Global_35;
					if (!func_71())
					{
						func_69(115, 4, 1);
					}
					else
					{
						func_69(115, 4, 0);
					}
					func_226(&Local_1397);
					if (func_37(iLocal_35, 8))
					{
						func_36(iLocal_742[0], Global_35, func_35("JOB_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1341 = 1;
					}
					else
					{
						func_205(iLocal_742[0], Global_35, Local_360[2 /*2*/], Local_360[2 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
					}
					iLocal_1384 = MISC::GET_GAME_TIMER();
					func_226(&Local_1397);
					func_197(&uLocal_1442, 0);
					iLocal_1044 = 13;
				}
			}
			else if (iLocal_34 == 0)
			{
				if (PED::IS_PED_STOPPED(iLocal_742[0]))
				{
					iLocal_34 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 13:
			if (((((func_41(-4f, 1, 0, 0) && (iLocal_1341 == 1 || iLocal_1360 == 1)) && func_38(iLocal_742[0], 1, 1) < 5f) && func_225(iLocal_742[0], &(Local_441.f_33), &uLocal_1325, &uLocal_1334, 2f, 4f, 0, 0, 1092616192 /* Float: 10f */, 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && func_30(&uLocal_1442) > 3f)
			{
				func_205(iLocal_742[0], Global_35, Local_360[3 /*2*/], Local_360[3 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
				iLocal_1384 = MISC::GET_GAME_TIMER();
				iLocal_1044 = 14;
			}
			break;
		case 14:
			if (!func_37(iLocal_35, 512))
			{
				func_33(&iLocal_35, 512);
			}
			if (bLocal_1333 && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[3 /*2*/], Local_360[3 /*2*/].f_1, 1) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_742[0], Local_360[3 /*2*/], Local_360[3 /*2*/].f_1) > 0.74f))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_742[0]);
				if (iLocal_1382 == 0)
				{
					func_45();
					iLocal_1382 = MISC::GET_GAME_TIMER();
				}
				if (iLocal_1364 == 0)
				{
					iLocal_1364 = 1;
					iLocal_978 = 2;
					iLocal_1363 = 0;
					iLocal_1384 = MISC::GET_GAME_TIMER();
					func_219(&(Local_1110[0 /*17*/]), "BEAT_GRT_POS");
					func_219(&(Local_1110[1 /*17*/]), "BEAT_GRT_NEG");
					func_43(&(Local_1046[0 /*21*/]), 0);
					func_44(&(Local_1110[0 /*17*/]), 1, 0);
					func_44(&(Local_1110[1 /*17*/]), 1, 0);
					iLocal_1366 = 1;
					iLocal_1367 = 1;
				}
			}
			if (func_38(iLocal_742[0], 1, 1) > 15f)
			{
				func_45();
				func_36(Global_35, iLocal_742[0], func_35("DECLINE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1382 = 0;
				iLocal_978 = 3;
				fLocal_1330 = 15f;
				func_44(&(Local_1110[0 /*17*/]), 0, 0);
				func_44(&(Local_1110[1 /*17*/]), 0, 0);
				func_43(&(Local_1046[0 /*21*/]), 0);
				iLocal_1366 = 0;
				iLocal_1367 = 0;
				iLocal_1363 = 1;
				iLocal_1044 = 15;
			}
			if (func_41(0, 1, 0, 0))
			{
				bLocal_1333 = true;
				if (MISC::GET_GAME_TIMER() > iLocal_1384 + 7500)
				{
					iLocal_1384 = MISC::GET_GAME_TIMER();
					func_227();
				}
			}
			break;
		case 15:
			Local_692.f_7 = 3500;
			if (!func_169(iLocal_742[0], 0) && !func_169(Global_35, 0))
			{
				func_228(&(Local_441.f_5), 1);
				Var17.f_3 = 1065353216;
				Var17.f_4 = -1;
				Var17.f_5 = 1048576000;
				Var17.f_6 = 1193033728;
				Var17 = { Local_1223.f_93 };
				Var17.f_3 = 1f;
				Var17.f_4 = -1;
				Var17.f_5 = 0.25f;
				Var17.f_6 = Local_1223.f_96;
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
				TASK::TASK_PLAY_ANIM(0, Local_360[8 /*2*/], Local_360[8 /*2*/].f_1, 2f, -2f, -1, 512, 0f, false, 0, false, 0, false);
				TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var17);
				func_42(0, joaat("WORLD_HUMAN_SMOKE"), -1, 1, 0, -1082130432 /* Float: -1f */);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1219);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
				PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
				iLocal_978 = 3;
				func_44(&(Local_1110[0 /*17*/]), 0, 0);
				func_44(&(Local_1110[1 /*17*/]), 0, 0);
				fLocal_1330 = 15f;
				func_62();
				return true;
			}
			break;
		case 16:
			if (func_41(-6f, 1, 0, 0))
			{
				func_229(115);
				func_205(iLocal_742[0], Global_35, Local_360[7 /*2*/], Local_360[7 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
				func_230(&Global_1935630, 4);
				iLocal_1220 = func_231(joaat("WORLD_HUMAN_SMOKE"), Local_1223.f_6, Local_1223.f_12, 0, 0, 0);
				iLocal_1221 = func_231(joaat("WORLD_HUMAN_SMOKE"), Local_1223.f_9, Local_1223.f_13, 0, 0, 0);
				func_81(183181940, 0, 0f, 0, 0, 0f, 0, 0);
				iLocal_1044 = 17;
			}
			break;
		case 17:
			if ((!func_232(-5f) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[7 /*2*/], Local_360[7 /*2*/].f_1, 1))
			{
				func_228(&(Local_441.f_5), 1);
				fVar0 = func_233(Local_1223.f_6, 1);
				fVar1 = func_233(Local_1223.f_9, 1);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
				if (fVar0 > fVar1)
				{
					TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_1220, "WORLD_HUMAN_SMOKE_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_1221, "WORLD_HUMAN_SMOKE_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				func_158(iLocal_742[0], &iLocal_1219, 0, 0, 1, 1);
				vLocal_1320 = { Local_20.f_3 };
				func_234(Local_1223.f_53, Local_1223.f_56, 0);
				func_18(&uLocal_1466, &uLocal_1481, Local_1223.f_53, 0f, 0f, 0f, Local_1223.f_56, Local_1223.f_56, 4f, 0, 0, 1, 0, 0);
				func_235(&iLocal_1471, Local_1223.f_26, Local_1223.f_29, Local_1223.f_32, 1, 10208, 0);
				func_33(&iLocal_35, 134217728);
				func_73(Global_35);
				fLocal_1323 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1320, true);
				iLocal_1352 = 0;
				func_46(&(uLocal_747[0]));
				func_236("ROB_OBJ_HOTEL", 7500, 0, 0, -1, -1, 0);
				if (MAP::DOES_BLIP_EXIST(iLocal_1217))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
				}
				bLocal_1359 = true;
				iLocal_1044 = 19;
				iLocal_978 = 4;
				fLocal_1330 = 15f;
				func_108(&(Local_1110[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
				func_108(&(Local_1110[1 /*17*/]), "BEAT_GRT_NEG", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
				func_43(&(Local_1046[0 /*21*/]), 0);
				func_44(&(Local_1110[0 /*17*/]), 1, 0);
				func_44(&(Local_1110[1 /*17*/]), 1, 0);
				iLocal_1366 = 1;
				iLocal_1367 = 1;
			}
			break;
		case 19:
			func_237();
			func_238();
			iLocal_1376 = 0;
			if (iLocal_1361 == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[3], &Local_692);
				}
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1469))
			{
				iLocal_1469 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Local_1223.f_57, Local_1223.f_60, Local_1223.f_63, "BlipVol");
				iLocal_1217 = MAP::_0xA6EF0C54A3443E70(1259054292, iLocal_1469);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
			}
			func_239();
			if (func_2() == 76)
			{
				func_240();
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_2);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1470))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1470, true, 0) && !func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_236("ROB_OBJ02B", 7500, 0, 0, -1, -1, 0);
					MAP::REMOVE_BLIP(&iLocal_1217);
					iLocal_1217 = MAP::_0xA6EF0C54A3443E70(1259054292, iLocal_1470);
					if (MAP::DOES_BLIP_EXIST(iLocal_1217))
					{
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
					}
					func_188(iLocal_742[0], joaat("WORLD_HUMAN_SMOKE"), Local_1223.f_6, Local_1223.f_12, -1, 1, 1, 0, -1082130432 /* Float: -1f */);
					func_11(&iLocal_35, 134217728);
					func_81(183181940, 0, -1f, 1, 0, 0f, 0, 0);
					iLocal_1044 = 22;
				}
				else if (!func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					if (func_30(&uLocal_1415) > 50f)
					{
						if (!func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
						{
							func_236("ROB_OBJ_HOTEL_B", 7500, 0, 0, -1, -1, 0);
							func_209(&uLocal_1415);
							func_241(&uLocal_1415);
						}
					}
				}
			}
			else
			{
				func_101(&iLocal_1470, Local_1223.f_17, Local_1223.f_20, Local_1223.f_23, "LootArea");
			}
			break;
		case 22:
			func_238();
			iLocal_1376 = 0;
			if ((func_30(&uLocal_1430) > 2f && iLocal_1351 == 0) && func_242(&(Local_441.f_162), "ROB_TAKE_MONEY", vLocal_883, 0, joaat("INPUT_CONTEXT_X"), 1.5f, 0f, 1, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_2, "player", &Local_924, false, 0, 2))
				{
					func_243(Local_924, Local_924.f_3.f_2);
				}
				else
				{
					Local_924 = { -323.5559f, 759.9235f, 117.4362f };
					Local_924.f_3.f_2 = -170.43f;
					func_243(Local_924, Local_924.f_3.f_2);
				}
				func_44(&(Local_1145[0 /*17*/]), 0, 0);
				func_44(&(Local_1145[1 /*17*/]), 0, 0);
				Local_441.f_44 = 1;
				iLocal_1044 = 26;
			}
			break;
		case 26:
			iLocal_1376 = 0;
			if (func_244(&Local_979, 106))
			{
				iLocal_1044 = 25;
			}
			break;
		case 25:
			iLocal_1376 = 0;
			iLocal_742[2] = func_245(Local_752[2 /*32*/].f_1, &(Local_752[2 /*32*/]), Local_1223.f_35, Local_1223.f_38, 1, 0, 1, 0, 1);
			func_39(iLocal_742[2], 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_742[2], Local_1223.f_35, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_742[2], Local_1223.f_38);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_742[2], true, true);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_752[2 /*32*/].f_23)))
			{
				func_110(iLocal_742[2], &(Local_752[2 /*32*/].f_23), 0);
			}
			PED::SET_COMBAT_FLOAT(iLocal_742[2], 7, 0.5f);
			func_207(iLocal_742[2], &(uLocal_747[2]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
			func_246(&(iLocal_742[2]), 718968995);
			iLocal_1044 = 21;
			break;
		case 21:
			iLocal_1376 = 0;
			if (func_27(iLocal_742[2], 0, 1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_2, true, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "Drunk", iLocal_742[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "Bills", Local_643[2 /*12*/].f_8, 0);
					ANIMSCENE::START_ANIM_SCENE(Local_635.f_2);
					iLocal_1478 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -322.772f, 759.238f, 117.436f, 0f, 0f, 10f, 2.33f, 0.868f, 5f);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", true);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", true);
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_2);
					return false;
				}
				func_226(&Local_1397);
				func_247(&(Local_1397.f_3), 1);
				iLocal_1044 = 24;
				Local_692.f_7 = 0;
			}
			else
			{
				return false;
			}
			break;
		case 24:
			iLocal_1376 = 0;
			fLocal_1329 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_635.f_2);
			if (fLocal_1329 > 0.562f && !func_37(iLocal_35, 536870912))
			{
				func_248(iLocal_36, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
				if (func_71())
				{
					func_66(2, joaat("HONOR_EVENT_THEFT"), 0, 0, iLocal_742[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				OBJECT::DELETE_OBJECT(&(Local_643[2 /*12*/].f_8));
				func_33(&iLocal_35, 536870912);
			}
			if (((fLocal_1329 > 0.652f || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[2], joaat("MONEY_GONE_A"))) && func_37(iLocal_35, 536870912)) && !func_37(iLocal_35, 4194304))
			{
				func_212(0);
				func_36(iLocal_742[2], Global_35, func_35("MONEY_GONE_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_33(&iLocal_35, 4194304);
				if (AUDIO::PREPARE_MUSIC_EVENT("RETR_CAUGHT"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("RETR_CAUGHT"))
					{
					}
				}
			}
			if (func_37(iLocal_35, 536870912))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_635.f_2, "Drunk"))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_1380 = 1;
					PED::REGISTER_TARGET(iLocal_742[2], Global_35, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 233, true);
					PED::_0x630E7B01F091A197(iLocal_742[2], joaat("GS_FACE_TO_FACE"));
					PED::_0x630E7B01F091A197(Global_35, joaat("GS_FACE_TO_FACE"));
					TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(iLocal_742[2], Global_35, 0, 0, 0, 1, 0);
					LAW::_0xFFEBE5AA96BC2E4E(iLocal_742[2], joaat("CRIME_UNARMED_ASSAULT"), 1);
					PED::FORCE_PED_MOTION_STATE(iLocal_742[2], 1926482157, false, 0, false);
					PED::FORCE_PED_MOTION_STATE(Global_35, 1926482157, false, 0, false);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_742[2], 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_742[2], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_742[2], 46, true);
					MAP::DISPLAY_RADAR(true);
					iLocal_1338 = 1;
					func_81(183181940, 0, 0f, 0, 0, 0f, 0, 0);
				}
				if (iLocal_1338 == 1)
				{
					vLocal_1320 = { ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false) };
					fLocal_1323 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1320, true);
					iLocal_1474 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vLocal_901, vLocal_904, vLocal_907);
					iLocal_1476 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_901, vLocal_904, vLocal_907, "NavMeshBlocker");
					PATHFIND::_0x19C7567D2F2287D6(iLocal_1476, 7);
					if (MAP::DOES_BLIP_EXIST(uLocal_747[0]))
					{
						iLocal_1352 = 0;
						func_46(&(uLocal_747[0]));
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_1217))
					{
						func_46(&iLocal_1217);
					}
					func_79();
					VOLUME::_SET_VOLUME_COORDS(iLocal_1470, -321.496f, 761.77f, 117.955f);
					VOLUME::_SET_VOLUME_ROTATION(iLocal_1470, 0f, 0f, 12.334f);
					VOLUME::_SET_VOLUME_SCALE(iLocal_1470, 12.757f, 5.266f, 3.069f);
					PED::_0x923583741DC87BCE(iLocal_742[0], "default");
					iLocal_1044 = 27;
				}
			}
			break;
		case 27:
			iLocal_1376 = 0;
			func_249();
			if (func_27(iLocal_742[2], 0, 1) && iLocal_1370 == 0)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[2]))
				{
					func_36(iLocal_742[2], Global_35, func_35("MONEY_GONE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1370 = 1;
				}
			}
			if (iLocal_1361 == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[3], &Local_692);
				}
			}
			if (((((iLocal_1350 == 0 && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1471, true, 0)) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[2], iLocal_1471, true, 0)) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[3], iLocal_1471, true, 0)) && func_27(iLocal_742[3], 0, 1)) && iLocal_1361 == 1)
			{
				if (func_250(iLocal_742[2]))
				{
					func_34(joaat("CRIME_ASSAULT"), iLocal_742[2], 1, 2f);
					func_36(iLocal_742[3], Global_35, func_35("GET_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1361 = 0;
				}
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_1396, true, 0, false))
			{
				if (((iLocal_1396 != joaat("WEAPON_UNARMED") && func_251(iLocal_742[2], 1, 1, 1, 0, 0)) && !func_37(iLocal_35, 262144)) && iLocal_1349 == 0)
				{
					func_252(iLocal_742[2]);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 146, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 148, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 44, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 190, true);
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), 50, 0, 0, 0, 0, 0, 0);
					LAW::_0xD7494DED50C6EF52(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), 1);
					LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), iLocal_742[2]);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "Default_Shocked", 1f, 0f, 4);
					LAW::_0xF0B67BAD53C35BD9(0, Global_35, iLocal_742[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("CRIME_BURGLARY"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_742[2], iLocal_1219);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
					PED::SET_PED_KEEP_TASK(iLocal_742[2], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_742[2], false);
					iLocal_1349 = 1;
				}
			}
			if (func_38(iLocal_742[2], 1, 1) > 20f && !func_253(iLocal_742[2], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_252(iLocal_742[2]);
				if (iLocal_1349 == 0)
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[2], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(iLocal_742[2], true);
				}
				func_33(&iLocal_35, 262144);
			}
			if (func_27(iLocal_742[2], 0, 1) && !func_32(iLocal_742[2], 1435919172))
			{
				TASK::TASK_COMBAT_PED(iLocal_742[2], Global_35, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_742[2], true);
			}
			if (!func_27(iLocal_742[2], 0, 1) || func_37(iLocal_35, 262144))
			{
				if (PED::_IS_PED_HOGTIED(iLocal_742[2]))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[2], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_742[2], false);
				}
				PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
				func_33(&iLocal_35, 262144);
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
				{
					if (func_155(&uLocal_1412))
					{
						if (func_222(&uLocal_1412) > 4f)
						{
							if (!MAP::DOES_BLIP_EXIST(uLocal_747[0]))
							{
								func_207(iLocal_742[0], &(uLocal_747[0]), -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, "RE_INTER_STRANGER");
								iLocal_1352 = 1;
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_747[0], "RE_INTER_STRANGER");
							}
							func_236("ROB_OBJ04", 7500, 0, 0, -1, -1, 0);
							ENTITY::SET_ENTITY_COORDS(iLocal_742[0], Local_1223.f_6, true, false, true, true);
							func_42(iLocal_742[0], joaat("WORLD_HUMAN_SMOKE"), -1, 1, 0, -1082130432 /* Float: -1f */);
							func_254(&Local_1110, 0, 0);
							iLocal_978 = 6;
							func_43(&(Local_1046[0 /*21*/]), 0);
							func_173(&(Local_1110[0 /*17*/]), 8);
							func_217(&(Local_1110[0 /*17*/]), "ROB_GIVE", iLocal_1387, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
							func_218(iLocal_742[0], &(Local_1110[0 /*17*/]), 15f, 3, 0, 0, 0, 0);
							func_219(&(Local_1110[1 /*17*/]), "ROB_LIE");
							func_44(&(Local_1110[0 /*17*/]), 0, 0);
							func_44(&(Local_1110[1 /*17*/]), 0, 0);
							func_220(&(Local_1110[0 /*17*/]), 1, 0);
							if (AUDIO::PREPARE_MUSIC_EVENT("RETR_STOP"))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("RETR_STOP"))
								{
								}
							}
							func_67(iLocal_1478);
							func_67(iLocal_1474);
							iLocal_1364 = 0;
							iLocal_1044 = 23;
						}
					}
					else
					{
						func_197(&uLocal_1412, 0);
					}
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_3);
				}
			}
			break;
		case 23:
			func_255();
			func_256();
			func_249();
			if (iLocal_1361 == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[3], &Local_692);
				}
			}
			bLocal_1359 = false;
			if (iLocal_1351 == 0)
			{
				if (func_233(Local_912, 1) < fLocal_1328)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					func_33(&iLocal_35, 33554432);
				}
				if (func_41(-2f, 1, 0, 0))
				{
					if (func_225(iLocal_742[0], &(Local_441.f_33), &uLocal_1325, &uLocal_1334, 2f, 7f, 0, 0, 1092616192 /* Float: 10f */, 1) && func_210(&(Local_441.f_33), Global_35, iLocal_742[0]))
					{
						bLocal_1354 = false;
						if (iLocal_1364 == 0)
						{
							iLocal_1364 = 1;
							func_173(&(Local_1110[0 /*17*/]), 8);
							func_217(&(Local_1110[0 /*17*/]), "ROB_GIVE", iLocal_1387, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
							func_219(&(Local_1110[1 /*17*/]), "ROB_LIE");
							func_220(&(Local_1110[0 /*17*/]), 1, 0);
							func_257();
							iLocal_1366 = 1;
							iLocal_1367 = 1;
						}
						PED::SET_IK_TARGET(iLocal_742[0], 1, Global_35, 21030, 0f, 0f, 0f, 0, -1, -1);
						func_33(&iLocal_35, 1073741824 /* Float: 2f */);
						func_226(&Local_1397);
						iLocal_1044 = 31;
					}
				}
			}
			break;
		case 31:
			if (func_233(Local_912, 1) < fLocal_1328)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				func_33(&iLocal_35, 33554432);
			}
			else
			{
				func_45();
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
			}
			if (func_258())
			{
				func_45();
				iLocal_1352 = 0;
				func_46(&(uLocal_747[0]));
				iLocal_1044 = 32;
			}
			break;
		case 32:
			iLocal_1352 = 0;
			func_46(&(uLocal_747[0]));
			if (func_27(iLocal_742[0], 0, 1))
			{
				func_73(iLocal_742[0]);
			}
			Var24.f_3 = 1065353216;
			Var24.f_4 = -1;
			Var24.f_5 = 1048576000;
			Var24.f_6 = 1193033728;
			Var24 = { Local_1223.f_93 };
			Var24.f_3 = 1f;
			Var24.f_4 = -1;
			Var24.f_5 = 0.25f;
			Var24.f_6 = Local_1223.f_96;
			if (iLocal_38 == 1)
			{
				func_36(iLocal_742[0], Global_35, func_35("THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
			if (iLocal_38 == 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 3000, -1f, -1f, -1f);
			}
			TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var24);
			func_42(0, joaat("WORLD_HUMAN_SMOKE"), -1, 0, 0, -1082130432 /* Float: -1f */);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1219);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
			PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
			iLocal_978 = 7;
			fLocal_1330 = 15f;
			func_44(&(Local_1110[0 /*17*/]), 0, 0);
			func_44(&(Local_1110[1 /*17*/]), 0, 0);
			func_80(&(iLocal_742[3]), 0);
			PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
			MAP::DISPLAY_RADAR(true);
			iLocal_1044 = 33;
			break;
		case 33:
			iLocal_1376 = 0;
			if (iLocal_1378 == 0 && Local_441.f_46 == 0)
			{
				if (func_27(iLocal_742[0], 0, 1))
				{
					if (!func_155(&uLocal_1460))
					{
						func_197(&uLocal_1460, 0);
					}
					if ((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && func_30(&uLocal_1460) > 1.5f)
					{
						func_108(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
						func_108(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
						func_44(&(Local_1110[0 /*17*/]), 1, 0);
						func_44(&(Local_1110[1 /*17*/]), 1, 0);
						iLocal_1378 = 1;
					}
				}
			}
			iLocal_1352 = 0;
			if (iLocal_1377 == 1)
			{
				func_46(&(uLocal_747[0]));
			}
			if (iLocal_1343 == 0)
			{
				func_33(&iLocal_35, 134217728);
				iLocal_1343 = 1;
				func_74(&Global_1935630, 4);
				func_75(115);
			}
			if (!func_27(iLocal_742[0], 0, 1))
			{
				return true;
			}
			else
			{
				fVar31 = func_38(iLocal_742[0], 1, 1);
				if (fVar31 > 20f)
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[0]))
					{
						if (!func_155(&uLocal_1439))
						{
							func_197(&uLocal_1439, 0);
						}
						if (func_30(&uLocal_1439) > 5f || fVar31 > 40f)
						{
							return true;
						}
					}
					else if (func_155(&uLocal_1439))
					{
						func_171(&uLocal_1439);
					}
				}
			}
			break;
		case 35:
			iLocal_1376 = 0;
			iLocal_1352 = 0;
			func_46(&(uLocal_747[0]));
			if (iLocal_1378 == 0 && Local_441.f_46 == 0)
			{
				if (func_27(iLocal_742[0], 0, 1))
				{
					if (!func_155(&uLocal_1460))
					{
						func_197(&uLocal_1460, 0);
					}
					if ((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && func_30(&uLocal_1460) > 1.5f)
					{
						func_108(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
						func_108(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
						func_44(&(Local_1110[0 /*17*/]), 1, 0);
						func_44(&(Local_1110[1 /*17*/]), 1, 0);
						iLocal_1378 = 1;
					}
				}
			}
			if (iLocal_1346 == 0)
			{
				PED::_0x39A2FC5AF55A52B1(iLocal_742[0], -1);
				iLocal_1346 = 1;
				func_197(&uLocal_1445, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]))
			{
				fVar32 = func_38(iLocal_742[0], 1, 1);
				if (func_82(iLocal_742[0], 1))
				{
					if (iLocal_1374 == 0)
					{
						func_70(115, 0, 2, 0, 0);
					}
					iLocal_1044 = 36;
				}
			}
			else
			{
				iLocal_1044 = 36;
			}
			if (func_155(&uLocal_1445))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[0]))
				{
					fVar33 = func_30(&uLocal_1445);
					if (fVar33 > 10f || (fVar32 > 40f && fVar33 > 1f))
					{
						if (func_51(115, 6) == 0)
						{
						}
						else if (func_51(115, 1) == 1)
						{
						}
						else if (func_51(115, 3) == 1)
						{
							func_259(115, 0, 0, 0, 14, 0, 0, 1);
						}
						else
						{
							func_259(115, 0, 0, 0, 14, 0, 0, 1);
						}
						func_171(&uLocal_1445);
						func_64(&(iLocal_742[0]));
						iLocal_1374 = 1;
					}
				}
				else
				{
					func_209(&uLocal_1445);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]) || iLocal_1348 == 1)
			{
				iLocal_1044 = 36;
			}
			break;
		case 36:
			iLocal_1376 = 0;
			if (iLocal_1347 == 0)
			{
				iLocal_1347 = 1;
				func_83(&Local_441, &iLocal_742, &uLocal_747, 0, uLocal_1489, uLocal_1488, 0, 1, 0, 1);
				if (iLocal_1373 == 1)
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(func_63(16));
					iLocal_1373 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[3]))
						{
							func_64(&(iLocal_742[3]));
						}
						else
						{
							TASK::TASK_WANDER_IN_AREA(iLocal_742[3], -325.6645f, 771.7883f, 116.436f, 7f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
							PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[3]));
						}
					}
					func_65(79, 1);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
			break;
		case 29:
			iLocal_1376 = 0;
			func_33(&iLocal_35, 134217728);
			func_159(&Local_441);
			if (MISC::_0x0D0AE5081F88CFE1(Local_20.f_12))
			{
				MISC::_0x154340E87D8CC178(Local_20.f_12);
			}
			if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_MONEYSTACK")))
			{
				MISC::_0x154340E87D8CC178(joaat("REWARD_MONEYSTACK"));
			}
			func_45();
			if (MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				func_46(&iLocal_1217);
			}
			func_78();
			func_79();
			func_260(iLocal_1479, 1);
			if (func_27(iLocal_742[1], 0, 1))
			{
				PED::_0xF1C03A5352243A30(iLocal_742[1]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_643[2 /*12*/].f_8))
			{
				if (!OBJECT::IS_OBJECT_VISIBLE(Local_643[2 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_643[2 /*12*/].f_8));
				}
			}
			if (func_27(iLocal_742[0], 0, 1))
			{
				func_261(iLocal_742[0], 0);
				PED::_0xF1C03A5352243A30(iLocal_742[0]);
				if (!func_37(iLocal_35, 1024))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_742[0]);
					iLocal_1352 = 0;
					func_46(&(uLocal_747[0]));
					if (iLocal_1215 != 16384)
					{
						func_212(0);
						if (PED::IS_PED_RAGDOLL(iLocal_742[0]) || PED::_0x29FCE825613FEFCA(iLocal_742[0], 500))
						{
							TASK::CLEAR_PED_TASKS(iLocal_742[0], true, false);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_742[0]);
						if (func_37(iLocal_35, 4))
						{
							if (!func_37(iLocal_35, -2147483648))
							{
								func_197(&uLocal_1460, 0);
							}
							TASK::TASK_MELEE(iLocal_742[0], Global_35, 0, 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
							PED::REGISTER_TARGET(iLocal_742[0], Global_35, 1);
							PED::REGISTER_TARGET(Global_35, iLocal_742[0], 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_742[0], 233, true);
							func_207(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							func_207(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							PED::SET_PED_FLEE_ATTRIBUTES(iLocal_742[0], 512, true);
							PED::SET_PED_CONFIG_FLAG(iLocal_742[0], 6, true);
							if (iLocal_1346 == 1)
							{
								iLocal_1044 = 35;
							}
							else
							{
								iLocal_1044 = 30;
							}
						}
						else if (func_37(iLocal_35, -2147483648))
						{
							if (iLocal_1215 == 0)
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
							}
							else
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
							}
						}
						else
						{
							func_36(iLocal_742[0], Global_35, func_35("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
							TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
						}
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					}
					PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
					func_33(&iLocal_35, 1024);
					iLocal_1386 = MISC::GET_GAME_TIMER();
				}
				else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iLocal_742[0], Local_360[9 /*2*/], Local_360[9 /*2*/].f_1, 1) || MISC::GET_GAME_TIMER() > iLocal_1386 + 5000)
				{
					if (bLocal_1335)
					{
						if (!func_37(iLocal_35, 4))
						{
							func_191(iLocal_742[0], 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, 0, 1);
							func_192(iLocal_742[0], 0);
						}
						return true;
					}
					else
					{
						return true;
					}
				}
			}
			break;
		case 30:
			iLocal_1376 = 0;
			if (!func_155(&uLocal_1451))
			{
				func_197(&uLocal_1451, 0);
			}
			if (func_27(iLocal_742[0], 0, 1))
			{
				if (func_167(&uLocal_1460, 0.5f))
				{
					if (iLocal_1344 == 1)
					{
						func_36(iLocal_742[0], Global_35, func_35("RUN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_1345 == 1)
					{
						func_36(iLocal_742[0], Global_35, func_35("NO_MONEY_ATTACK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_36(iLocal_742[0], Global_35, func_35("ATTACK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_1396, true, 0, false))
				{
					if (iLocal_1396 != joaat("WEAPON_UNARMED") && (func_251(iLocal_742[0], 1, 1, 1, 0, 0) || func_262(iLocal_742[0], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0)))
					{
						TASK::TASK_COMBAT_PED(iLocal_742[0], Global_35, 0, 0);
						func_207(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
						iLocal_1377 = 1;
						if (iLocal_1346 == 1)
						{
							iLocal_1044 = 35;
						}
						else
						{
							iLocal_1044 = 33;
						}
					}
					else if (func_165(Global_35, iLocal_742[0], 1, 1) > 10f || func_30(&uLocal_1451) > 10f)
					{
						TASK::TASK_COMBAT_PED(iLocal_742[0], Global_35, 0, 0);
						func_207(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
						iLocal_1377 = 1;
						if (iLocal_1346 == 1)
						{
							iLocal_1044 = 35;
						}
						else
						{
							iLocal_1044 = 33;
						}
					}
				}
				else if (func_165(Global_35, iLocal_742[0], 1, 1) > 15f)
				{
					TASK::TASK_COMBAT_PED(iLocal_742[0], Global_35, 0, 0);
					func_207(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
					iLocal_1377 = 1;
					if (iLocal_1346 == 1)
					{
						iLocal_1044 = 35;
					}
					else
					{
						iLocal_1044 = 33;
					}
				}
			}
			break;
	}
	return false;
}

bool func_48(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_263())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_264(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_96(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_96(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_96(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*iParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_265(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_265(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

float func_49(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_50(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_266(iParam0) % iParam1);
	}
	return (func_267(iParam0) % iParam1);
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_268(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_1;
	}
	return 0;
}

var func_52(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_269(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_270(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_269(sVar0, iParam1, 0, 0, 1, 1);
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_60(&(uParam0->f_1), 16384);
	}
	else
	{
		func_59(&(uParam0->f_1), 16384);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_60(&(uParam0->f_1), 2048);
	}
	else
	{
		func_59(&(uParam0->f_1), 2048);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_60(&(uParam0->f_1), 256);
	}
	else
	{
		func_59(&(uParam0->f_1), 256);
	}
}

void func_56(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_60(&(iParam0->f_1), 128);
	}
	else
	{
		func_59(&(iParam0->f_1), 128);
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_59(iParam0, 256);
	}
	else
	{
		func_60(iParam0, 256);
	}
}

void func_58(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_59(iParam0, 268435456);
	}
	else
	{
		func_60(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_59(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_60(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_59(iParam0, 536870912);
	}
	else
	{
		func_60(iParam0, 536870912);
	}
}

void func_59(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_60(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_61(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_62()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

int func_63(int iParam0)
{
	if (!func_271(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_64(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_65(int iParam0, bool bParam1)
{
	if (!func_272(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_273(iParam0, 1);
	}
	else
	{
		func_274(iParam0, 1);
	}
	func_276(func_275(iParam0), bParam1);
}

void func_66(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_277() != -1)
	{
		return;
	}
	if ((Global_36616 && func_166(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_278(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_279(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_280(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_279(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_67(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_68()
{
	func_69(115, 6, 0);
	if (func_71())
	{
		func_281(115, 3, 1);
	}
	else
	{
		func_69(115, 3, 1);
	}
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_282(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 != 0)
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
		if (iVar0 != 0)
		{
			func_283(iParam0, iParam1, iVar0);
			func_281(iParam0, iParam1, func_284(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		func_283(iParam0, iParam1, iParam4);
		func_281(iParam0, iParam1, func_284(iParam3));
	}
	func_69(iParam0, iParam1, iParam2);
	func_286(iParam0, iParam1, func_285(1));
	func_288(iParam0, iParam1, func_287());
}

bool func_71()
{
	if (func_277() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_72(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(*iParam0);
	POPULATION::_0xA1CFB35069D23C23(*iParam0);
	VOLUME::_DELETE_VOLUME(*iParam0);
}

void func_73(int iParam0)
{
	TASK::TASK_CLEAR_LOOK_AT(iParam0);
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_75(int iParam0)
{
	if (!func_289(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_46 = 0;
}

void func_76(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_290(32);
		func_259(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

void func_77(var uParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*uParam0);
		POPULATION::_0xA1CFB35069D23C23(*uParam0);
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

void func_78()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1465))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_1465);
		POPULATION::_0xA1CFB35069D23C23(iLocal_1465);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1480, false);
		VOLUME::_DELETE_VOLUME(iLocal_1465);
	}
}

void func_79()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_20.f_1))
	{
		VOLUME::_DELETE_VOLUME(Local_20.f_1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_20.f_2))
	{
		VOLUME::_DELETE_VOLUME(Local_20.f_2);
	}
}

void func_80(int* iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		if (bParam1)
		{
			*iParam0 = 0;
		}
	}
}

void func_81(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_291(iParam0, 0, 0);
	if (func_292(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_293(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_294(iParam0, 1);
			}
			else
			{
				func_295(iParam0, 1);
			}
		}
		else
		{
			func_296(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_297())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_82(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

void func_83(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_298(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_299(uParam0->f_3, 524288);
		}
	}
	if (func_27(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_27((*iParam1)[iVar0], 0, 0))
			{
				func_192((*iParam1)[iVar0], bVar3);
				if (func_300(uParam0, iParam1[iVar0]))
				{
					func_301(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_27((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_191((*iParam1)[iVar0], 1073741824 /* Float: 2f */, func_302(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_303(uParam0);
	}
	func_304(uParam0);
	if (!uParam0->f_186)
	{
		func_113(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_305(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_306(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

bool func_84(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_307(iVar0))
	{
		return false;
	}
	if (func_308(iVar0, 1) || func_308(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_85(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_309(uParam0->f_3);
	iVar1 = func_310(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_86()
{
	Local_752[0 /*32*/].f_1 = joaat("RE_TOWNROBBERY_MALES_01");
	Local_752[0 /*32*/] = 4;
	Local_752[0 /*32*/].f_3 = 1550613446;
	StringCopy(&(Local_752[0 /*32*/].f_23), "0842_S_M_M_UniButchers_01_WHITE_01", 64);
	Local_752[1 /*32*/].f_1 = joaat("A_M_M_VALTOWNFOLK_02");
	Local_752[1 /*32*/] = 4;
	Local_752[2 /*32*/].f_1 = joaat("RE_TOWNROBBERY_MALES_01");
	Local_752[2 /*32*/] = 4;
	Local_752[2 /*32*/].f_3 = 718968995;
	StringCopy(&(Local_752[2 /*32*/].f_23), "0805_A_M_M_SDDockForeman_01_WHITE_01", 64);
	Local_752[3 /*32*/].f_1 = joaat("CS_BATHINGLADIES_01");
	Local_752[3 /*32*/] = 5;
	StringCopy(&(Local_752[3 /*32*/].f_23), "1102_A_F_M_BathingLadies_01_WHITE_02", 64);
	func_311(&(Local_752[0 /*32*/].f_22));
	func_311(&(Local_752[2 /*32*/].f_22));
	func_291(183181940, 1, 0);
}

void func_87()
{
	func_312(&Local_752);
}

void func_88()
{
	Local_360[0 /*2*/] = "script_re@town_robbery";
	Local_360[0 /*2*/].f_1 = "base";
	Local_360[1 /*2*/] = "script_re@town_robbery";
	Local_360[1 /*2*/].f_1 = "i_can_use";
	Local_360[2 /*2*/] = "script_re@town_robbery";
	Local_360[2 /*2*/].f_1 = "my_bastard";
	Local_360[3 /*2*/] = "script_re@town_robbery";
	Local_360[3 /*2*/].f_1 = "so_listen";
	Local_360[4 /*2*/] = "script_re@town_robbery";
	Local_360[4 /*2*/].f_1 = "so_u_interested";
	Local_360[5 /*2*/] = "script_re@town_robbery";
	Local_360[5 /*2*/].f_1 = "wont_take_u";
	Local_360[6 /*2*/] = "script_re@town_robbery";
	Local_360[6 /*2*/].f_1 = "they_know_me";
	Local_360[7 /*2*/] = "script_re@town_robbery";
	Local_360[7 /*2*/].f_1 = "the_fool_hides";
	Local_360[8 /*2*/] = "script_re@town_robbery";
	Local_360[8 /*2*/].f_1 = "fine_suit";
	Local_360[9 /*2*/] = "script_re@town_robbery";
	Local_360[9 /*2*/].f_1 = "what_the_hell";
	Local_360[10 /*2*/] = "script_re@town_robbery";
	Local_360[10 /*2*/].f_1 = "get";
	Local_360[11 /*2*/] = "script_re@town_robbery";
	Local_360[11 /*2*/].f_1 = "did_u_get_it";
	Local_360[12 /*2*/] = "script_re@town_robbery";
	Local_360[12 /*2*/].f_1 = "dont_leave_me";
	Local_360[13 /*2*/] = "script_re@town_robbery";
	Local_360[13 /*2*/].f_1 = "come_on_talk";
	Local_360[14 /*2*/] = "script_re@town_robbery";
	Local_360[14 /*2*/].f_1 = "hey_you";
	Local_360[15 /*2*/] = "script_re@town_robbery";
	Local_360[15 /*2*/].f_1 = "remember_me";
	Local_360[16 /*2*/] = "script_re@town_robbery";
	Local_360[16 /*2*/].f_1 = "we_had_a_deal";
	Local_360[17 /*2*/] = "script_re@town_robbery";
	Local_360[17 /*2*/].f_1 = "come_on";
	Local_360[18 /*2*/] = "script_re@town_robbery";
	Local_360[18 /*2*/].f_1 = "be_a_gentleman";
	Local_360[19 /*2*/] = "script_re@town_robbery";
	Local_360[19 /*2*/].f_1 = "give_me_the_money";
	Local_360[20 /*2*/] = "script_re@town_robbery";
	Local_360[20 /*2*/].f_1 = "about_time";
	Local_360[21 /*2*/] = "script_re@town_robbery";
	Local_360[21 /*2*/].f_1 = "base_money";
	Local_360[22 /*2*/] = "script_re@town_robbery";
	Local_360[22 /*2*/].f_1 = "idle_male";
	Local_360[23 /*2*/] = "script_re@dark_alley_ambush";
	Local_360[23 /*2*/].f_1 = "callover_n";
	Local_360[36 /*2*/] = "script_re@town_robbery";
	Local_360[36 /*2*/].f_1 = "nice_work";
	Local_360[24 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	Local_360[24 /*2*/].f_1 = "ENTER_FRONT_att";
	Local_360[34 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	Local_360[34 /*2*/].f_1 = "ENTER_FAR_FRONT_att";
	Local_360[28 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	Local_360[28 /*2*/].f_1 = "struggle_enter_att";
	Local_360[30 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	Local_360[30 /*2*/].f_1 = "ATTACK_ENTER_att";
	Local_360[32 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER";
	Local_360[32 /*2*/].f_1 = "IDLE";
	Local_360[25 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	Local_360[25 /*2*/].f_1 = "ENTER_FRONT_vic";
	Local_360[35 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	Local_360[35 /*2*/].f_1 = "ENTER_FAR_FRONT_vic";
	Local_360[29 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	Local_360[29 /*2*/].f_1 = "struggle_enter_vic";
	Local_360[31 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	Local_360[31 /*2*/].f_1 = "ATTACK_ENTER_vic";
	Local_360[33 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM";
	Local_360[33 /*2*/].f_1 = "IDLE";
	Local_360[26 /*2*/] = "AMB_REST@WORLD_HUMAN_SMOKING@MALE_A@STAND_ENTER";
	Local_360[26 /*2*/].f_1 = "ENTER_BACK";
	Local_360[27 /*2*/] = "AMB_REST@WORLD_HUMAN_SMOKING@MALE_A@TRANS";
	Local_360[27 /*2*/].f_1 = "A_TRANS_D";
	func_313(Local_360[0 /*2*/], &uLocal_39);
	func_313(Local_360[23 /*2*/], &uLocal_39);
	func_313(Local_360[24 /*2*/], &uLocal_39);
	func_313(Local_360[30 /*2*/], &uLocal_39);
	func_313(Local_360[26 /*2*/], &uLocal_39);
	STREAMING::REQUEST_ANIM_DICT(func_314(32));
	STREAMING::REQUEST_ANIM_DICT(func_314(33));
}

void func_89(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL((uParam0[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

bool func_90(var uParam0, char* sParam1)
{
	return true;
}

bool func_91(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_92(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam0[iVar0 /*12*/])->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_93(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_315(iParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_94(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_316(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_317(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return true;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_116(iParam0, 128))
			{
				if (!func_318(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return false;
				}
			}
			else
			{
				func_319(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_320(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return false;
				}
				if (func_194(*uParam1))
				{
					return func_321(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_322(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_317(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return true;
				}
				func_323(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_324(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_325(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_116(iParam0, 128))
			{
				if (!func_326(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_321(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return false;
				}
			}
			else
			{
				func_319(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_323(uParam1))
					{
						return func_321(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_327(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_317(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return true;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_321(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_52("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			func_52("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return false;
}

bool func_95(var uParam0, int iParam1)
{
	if (func_96(iParam1, 256))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_172) || func_329(iParam1, func_328(uParam0), &(uParam0->f_172)))
		{
			if (func_27(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_96(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_97(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_330(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_96(uParam0->f_3, 1) && !func_96(uParam0->f_3, 32))
	{
		func_330(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_96(uParam0->f_3, 2) && !func_96(uParam0->f_3, 32))
	{
		func_330(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_331(uParam0->f_171, 1);
	}
	if (func_96(uParam0->f_3, 1))
	{
		func_330(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_332(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_98(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_99(var uParam0)
{
	switch (Local_441.f_51.f_4)
	{
		case 0:
			*uParam0 = { -299.8715f, 769.5512f, 117.7743f };
			uParam0->f_3 = { -300.0843f, 767.3349f, 117.7702f };
			uParam0->f_15 = joaat("WORLD_HUMAN_SMOKE");
			uParam0->f_14 = -76.56f;
			uParam0->f_6 = { -299.7303f, 766.5651f, 117.7851f };
			uParam0->f_9 = { -300.8016f, 773.0268f, 117.7855f };
			uParam0->f_12 = -79.004f;
			uParam0->f_13 = -79.004f;
			uParam0->f_66 = { -298.5822f, 776.9185f, 120.118f };
			uParam0->f_69 = { 0f, 0f, 101.1443f };
			uParam0->f_72 = { 15.58453f, 13.05635f, 7.820213f };
			uParam0->f_75 = { -298.634f, 788.0432f, 118.9547f };
			uParam0->f_78 = { 0f, 0f, 99.16987f };
			uParam0->f_81 = { 5.646725f, 8.299273f, 4.382039f };
			uParam0->f_84 = { -294.5358f, 770.6732f, 117.779f };
			uParam0->f_87 = { 0f, 0f, 99f };
			uParam0->f_90 = { 10f, 5f, 6f };
			uParam0->f_93 = { -251.4322f, 771.3552f, 116.4666f };
			uParam0->f_96 = 40000f;
			break;
		case 1:
			*uParam0 = { -279.3015f, 763.6104f, 117.222f };
			uParam0->f_3 = { -281.3456f, 764.8769f, 117.7411f };
			uParam0->f_15 = joaat("WORLD_HUMAN_SMOKE");
			uParam0->f_14 = -76.56f;
			uParam0->f_6 = { -279.6109f, 759.9537f, 117.015f };
			uParam0->f_9 = { -279.6109f, 759.9537f, 117.015f };
			uParam0->f_12 = 65f;
			uParam0->f_13 = 65f;
			uParam0->f_66 = { -268.718f, 763.917f, 116.6868f };
			uParam0->f_69 = { 0f, 0f, 17f };
			uParam0->f_72 = { 15.58453f, 13.05635f, 7.820213f };
			uParam0->f_75 = { -258.538f, 767.142f, 117.786f };
			uParam0->f_78 = { 0f, 0f, 17f };
			uParam0->f_81 = { 5.646725f, 8.299273f, 4.382039f };
			uParam0->f_84 = { -280.8935f, 763.319f, 117.4991f };
			uParam0->f_87 = { 0f, 0f, 17f };
			uParam0->f_90 = { 7f, 7f, 4f };
			uParam0->f_93 = { -251.4322f, 771.3552f, 116.4666f };
			uParam0->f_96 = 40000f;
			break;
		case 2:
			*uParam0 = { -348.1741f, 800.2321f, 115.0208f };
			uParam0->f_3 = { -346.3924f, 803.803f, 115.4115f };
			uParam0->f_15 = joaat("WORLD_HUMAN_SMOKE");
			uParam0->f_14 = 94.01f;
			uParam0->f_6 = { -341.2685f, 800.8436f, 116.116f };
			uParam0->f_9 = { -341.2685f, 800.8436f, 116.116f };
			uParam0->f_12 = 96.9f;
			uParam0->f_13 = 96.9f;
			uParam0->f_66 = { -344.085f, 800.505f, 115.2104f };
			uParam0->f_69 = { 0f, 0f, -81.93185f };
			uParam0->f_72 = { 15.58453f, 18.53757f, 7.820213f };
			uParam0->f_75 = { -342.403f, 790.035f, 115.485f };
			uParam0->f_78 = { 0f, 0f, -81.49422f };
			uParam0->f_81 = { 5.646725f, 8.299273f, 4.382039f };
			uParam0->f_84 = { -342.5213f, 801.1843f, 116.1163f };
			uParam0->f_87 = { 0f, 0f, -81f };
			uParam0->f_90 = { 12.009f, 6.19f, 4f };
			uParam0->f_93 = { -251.4322f, 771.3552f, 116.4666f };
			uParam0->f_96 = 40000f;
			break;
	}
	uParam0->f_17 = { -324.8906f, 760.5921f, 117.9551f };
	uParam0->f_20 = { 0f, 0f, 12.33403f };
	uParam0->f_23 = { 5.758606f, 4.258173f, 3.068927f };
	uParam0->f_26 = { -326.1048f, 773.8114f, 117.8995f };
	uParam0->f_29 = { 0f, 0f, -170.0063f };
	uParam0->f_32 = { 8.355642f, 5.46991f, 3.228833f };
	uParam0->f_57 = { -322.5677f, 768.0349f, 121.6935f };
	uParam0->f_60 = { 0f, 0f, -80.2267f };
	uParam0->f_63 = { 18.60986f, 13.51953f, 10.92944f };
	uParam0->f_35 = { -322.2873f, 770.4114f, 116.4364f };
	uParam0->f_38 = 200.9934f;
	uParam0->f_53 = { -324.8542f, 758.8079f, 116.4341f };
	uParam0->f_56 = 3f;
	if (!TASK::_0x6EEAD6AF637DA752(uParam0->f_3, uParam0->f_15, 1f, 0))
	{
		uParam0->f_16 = func_231(uParam0->f_15, uParam0->f_3, uParam0->f_14, 0, 0, 0);
	}
}

void func_100(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_333());
	}
}

void func_101(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_102(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_333());
	}
}

void func_103(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_104()
{
	switch (Local_441.f_51.f_4)
	{
		case 0:
			Local_752[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_752[0 /*32*/].f_9 = 0f;
			Local_752[1 /*32*/].f_6 = { -1.89f, -18.9f, -0.35f };
			Local_752[1 /*32*/].f_9 = -75.304f;
			break;
		case 1:
			Local_752[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_752[0 /*32*/].f_9 = -95.139f;
			Local_752[1 /*32*/].f_6 = { -20.68f, -4.5f, 0.09f };
			Local_752[1 /*32*/].f_9 = -75f;
			break;
		case 2:
			Local_752[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_752[0 /*32*/].f_9 = 177.42f;
			Local_752[1 /*32*/].f_6 = { 6.04f, 15.94f, 0.62f };
			Local_752[1 /*32*/].f_9 = 89.65f;
			break;
	}
}

Vector3 func_105(var uParam0)
{
	return uParam0->f_51;
}

var func_106(var uParam0)
{
	return uParam0->f_51.f_3;
}

bool func_107(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;

	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_334() || !func_335(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_108(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_174(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_336(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_337(iParam0->f_6, iParam0->f_5, 0);
			}
			func_338(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_219(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_109(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_110(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_27(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_111(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 1f;
	uParam0->f_5 = 1f;
	uParam0->f_16 = joaat("FACIALONLY_FILTER");
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0.5f;
	uParam0->f_19 = -1;
	uParam0->f_20 = 6;
	uParam0->f_21 = 1;
	uParam0->f_23 = 69632;
}

int func_112(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_339(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_105(uParam0) };
	iVar3 = func_305(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_114(var uParam0, int iParam1)
{
	if (uParam0->f_2 >= *iParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*iParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_115(var uParam0)
{
	func_55(uParam0, 1);
	func_340(uParam0, 20);
}

bool func_116(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

void func_117(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_289(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_341())
	{
		func_342(1);
	}
	func_343(iParam2, uParam0->f_43);
	func_344(iParam2, 0, 0, 0, 0);
	if (func_345(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_298(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_346(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_118(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_119(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_347())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_116(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_117(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_118(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_213(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_348(uParam0, bVar0);
		func_349(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (func_350(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_117(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_118(&(uParam0->f_121));
		}
	}
}

bool func_120(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_96(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_351())
			{
				fVar0 = 15f;
			}
		}
		if (func_352(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_352(uParam2, fVar1))
		{
			if (!func_353(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_354(uParam2->f_3, 2) && func_355(2))
		{
			return false;
		}
		if (func_96(iParam0, 4194304) || func_96(iParam0, 33554432))
		{
			if (func_356(1))
			{
				return false;
			}
		}
	}
	if (func_357(Global_35))
	{
		return false;
	}
	if (func_358(0, 1, 1) && !func_359(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_96(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_360(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_361())
		{
			return false;
		}
		iVar2 = func_362(func_2());
		if (func_363(iVar2))
		{
			if (func_364(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_365(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_366(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_121(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_367(uParam0->f_51))
	{
		func_368(uParam0->f_51, 0);
		fVar0 = func_369(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_333());
		bVar1 = func_302(!func_96(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_371(iVar2, func_370(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_122(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_37(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_37(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_37(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_123(int iParam0, bool bParam1, int iParam2)
{
	func_372(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = func_373(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_59(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_356(1))
						{
							func_59(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_356(1) || *iParam0 & 8192 != 0))
				{
					func_60(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_374(iParam0))
			{
				iParam0->f_15 = func_143();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_143() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_375(iParam0);
}

bool func_124(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_376(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_221(iParam0, iVar2) <= func_377(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_378(iParam2, 1, 1, 1, 0))
	{
		func_59(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_379(iParam1, 1);
	func_45();
}

bool func_126(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_251(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_380(iParam1);
			if (func_381(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_382(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_379(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_379(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_127(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_383(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_380(iParam2);
		if (func_381(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_382(iParam2)
				{
					func_379(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_128(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_376(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_382(iParam1)
		{
			fVar3 = func_380(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_129(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_384(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_130(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_143();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_131(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_385(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_139(iParam2, iParam1))
			{
				func_379(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_132(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_386(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_139(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_379(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_133(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_387(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_379(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_379(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (func_388(iParam1, vVar0, vVar4))
					{
						func_379(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_379(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (func_388(iParam1, vVar0, vVar7))
					{
						func_379(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_134(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_376(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_389(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_390(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_391(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_392(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_393(iParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_136(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_143();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_137(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_394(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_395(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_138(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_139(int iParam0, int iParam1)
{
	if (func_396(iParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_165(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_141()
{
}

bool func_142(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_397(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_143();
			return true;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_49(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_143();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_143()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_144()
{
	if (Global_1935630.f_42 == 0)
	{
		return false;
	}
	if (Global_1935630.f_42 == Global_1935630.f_40)
	{
		return false;
	}
	if (Global_1935630.f_43 <= 0)
	{
		return false;
	}
	if ((func_143() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_145(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_377(iParam0);
	if (iParam0->f_12 > func_398(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_399(iParam1);
	iVar1 = func_400(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_401(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_147(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_402(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_403(iParam1, iParam0))
					{
						if (func_49(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_148(int iParam0, int iParam1)
{
	if (!func_404(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_143();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_150(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_151(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_143();
	}
	else if (func_143() - iParam1->f_4) > func_405(iParam1)
	{
		return func_406(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_152(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630.f_40 == iVar1)
	{
		return true;
	}
	return false;
}

void func_153(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_157() - fParam1);
	func_407(uParam0, 1);
	func_408(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_154(var uParam0, int iParam1)
{
	*iParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

bool func_155(var uParam0)
{
	return func_409(*uParam0, 1);
}

bool func_156(var uParam0)
{
	return func_409(*uParam0, 2);
}

float func_157()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_158(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_159(var uParam0)
{
	if (func_174(uParam0->f_162))
	{
		func_175(&(uParam0->f_162), 1, 1);
	}
	if (func_174(uParam0->f_163))
	{
		func_175(&(uParam0->f_163), 1, 1);
	}
	if (func_174(uParam0->f_164))
	{
		func_175(&(uParam0->f_164), 1, 1);
	}
	if (func_174(uParam0->f_165))
	{
		func_175(&(uParam0->f_165), 1, 1);
	}
}

void func_160(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_161(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_74(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_230(&Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_162()
{
	return Global_1897952.f_41;
}

var func_163(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	char cVar0[64];
	char cVar8[32];

	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return func_410(cVar0);
}

int func_164(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_351())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_38(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_165(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_209(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_411(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_413(func_412(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

float func_165(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return 512;
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return 1024;
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return 2048;
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return 4096;
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return 8192;
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return 16384;
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return 32768;
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return 65536;
		case joaat("HONOR_EVENT_THEFT"):
			return 131072;
		case joaat("HONOR_EVENT_INTERVENED"):
			return 262144;
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return 524288;
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return 1048576;
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return 2097152;
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return 4194304;
		default:
			break;
	}
	return 0;
}

bool func_167(var uParam0, float fParam1)
{
	if (func_414(uParam0, fParam1))
	{
		func_171(uParam0);
		return true;
	}
	return false;
}

var func_168(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_169(int iParam0, bool bParam1)
{
	if (func_27(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_170(float fParam0)
{
	if (func_415(1))
	{
		return true;
	}
	if (func_155(&uLocal_0) && !func_167(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_171(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_172(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_173(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_174(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945938[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3);
}

void func_175(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_174(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_416(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_417(iVar0);
	*uParam0 = 0;
}

void func_176(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_418(iParam0))
	{
		return;
	}
	sVar0 = func_419(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = MISC::GET_HASH_KEY(sVar0);
		GRAPHICS::_0xBFCB17895BB99E4E(iVar1, 1);
		if (GRAPHICS::_0x113857D66A9CABE6(iVar1))
		{
		}
		GRAPHICS::_0x67B0778C62E74423(0);
		GRAPHICS::_0x6C03118E9E5C1A14(0);
	}
	else
	{
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1914319.f_3[iParam0 /*446*/].f_11);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar2))
		{
			return;
		}
		if (!INTERIOR::IS_INTERIOR_READY(iVar2))
		{
			return;
		}
		iVar3 = GRAPHICS::_0x5D1C5D8E62E8EE1C(iVar2);
		if (!GRAPHICS::_0x113857D66A9CABE6(iVar3))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar3, 1);
		}
	}
}

void func_177()
{
	if ((iLocal_1376 == 1 && Local_441.f_46 == 0) && func_27(iLocal_742[0], 0, 1))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[0], &Local_692);
	}
	iLocal_1376 = 1;
}

void func_178()
{
	int iVar0;

	if (iLocal_1369 == 1)
	{
		return;
	}
	if (iLocal_978 == 6)
	{
		func_420();
	}
	iVar0 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]) && func_27(iLocal_742[0], 0, 1))
	{
		iVar0 = func_422(&(iLocal_742[0]), &(Local_1046[0 /*21*/]), 15f, &Local_1110, &(Local_441.f_192), 0f, 1, 0, 0, func_421(), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar0 == 0)
		{
			switch (iLocal_978)
			{
				case 0:
					if (func_37(iLocal_35, 8))
					{
						func_36(Global_35, iLocal_742[0], func_35("EARLY_POS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_36(Global_35, iLocal_742[0], func_35("EARLY_POS_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1375 = 1;
					break;
				case 2:
					iLocal_1382 = 0;
					func_212(0);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[4 /*2*/], Local_360[4 /*2*/].f_1, 1))
					{
						TASK::STOP_ANIM_TASK(iLocal_742[0], Local_360[4 /*2*/], Local_360[4 /*2*/].f_1, -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[5 /*2*/], Local_360[5 /*2*/].f_1, 1))
					{
						TASK::STOP_ANIM_TASK(iLocal_742[0], Local_360[5 /*2*/], Local_360[5 /*2*/].f_1, -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[6 /*2*/], Local_360[6 /*2*/].f_1, 1))
					{
						TASK::STOP_ANIM_TASK(iLocal_742[0], Local_360[6 /*2*/], Local_360[6 /*2*/].f_1, -2f);
					}
					if (iLocal_1373 == 0)
					{
						func_65(79, 0);
						func_423(16);
						iLocal_1373 = 1;
					}
					func_45();
					func_36(Global_35, iLocal_742[0], func_35("ACCEPT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (bLocal_936)
					{
						func_424();
					}
					func_425();
					iLocal_1342 = 1;
					iLocal_1044 = 16;
					iLocal_1363 = 1;
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					break;
				case 3:
					func_36(Global_35, iLocal_742[0], func_35("ILO_DECLINE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_33(&iLocal_976, 1);
					iLocal_1012 = 0;
					break;
				case 4:
					func_36(Global_35, iLocal_742[0], func_35("ILO_ACCEPT_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_33(&iLocal_976, 16);
					iLocal_1012 = 2;
					func_153(&uLocal_1424, -4f);
					break;
				case 6:
					iLocal_1382 = 0;
					iLocal_977 = 8;
					func_228(&(Local_441.f_5), 0);
					if (iLocal_1373 == 1)
					{
						PERSCHAR::_0x4F81EAD1DE8FA19B(func_63(16));
						iLocal_1373 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[3]))
							{
								func_64(&(iLocal_742[3]));
							}
							else
							{
								TASK::TASK_WANDER_IN_AREA(iLocal_742[3], -325.6645f, 771.7883f, 116.436f, 7f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
								PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[3]));
							}
						}
						func_65(79, 1);
					}
					iLocal_1371 = 1;
					iLocal_1363 = 1;
					iLocal_978 = 7;
					fLocal_1330 = 15f;
					func_62();
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					break;
				case 7:
					if (func_37(iLocal_976, 1073741824 /* Float: 2f */))
					{
						func_36(Global_35, iLocal_742[0], func_35("ILO_LIE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_976, 1048576);
						iLocal_1012 = 10;
					}
					else
					{
						func_36(Global_35, iLocal_742[0], func_35("ILO_GAVE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_976, 65536);
						iLocal_1012 = 8;
					}
					break;
			}
			func_43(&(Local_1046[0 /*21*/]), 0);
			func_44(&(Local_1110[0 /*17*/]), 0, 0);
			func_44(&(Local_1110[1 /*17*/]), 0, 0);
			iLocal_1366 = 0;
		}
		else if (iVar0 == 1)
		{
			switch (iLocal_978)
			{
				case 0:
					if (func_37(iLocal_35, 8))
					{
						func_36(Global_35, iLocal_742[0], func_35("EARLY_NEG_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_36(Global_35, iLocal_742[0], func_35("EARLY_NEG_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1375 = 1;
					break;
				case 2:
					func_45();
					func_212(0);
					func_36(Global_35, iLocal_742[0], func_35("DECLINE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1382 = 0;
					iLocal_1044 = 15;
					iLocal_978 = 3;
					fLocal_1330 = 15f;
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					iLocal_1363 = 1;
					break;
				case 3:
					func_36(Global_35, iLocal_742[0], func_35("ILO_DECLINE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_33(&iLocal_976, 2);
					iLocal_1012 = 1;
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					break;
				case 4:
					func_36(Global_35, iLocal_742[0], func_35("DECLINE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_33(&iLocal_976, 32);
					iLocal_1012 = 3;
					func_153(&uLocal_1424, -4f);
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					PED::_0xA3A9299C4F2ADB98(iLocal_742[0]);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_742[0], Global_35, -1, -1f, -1f, -1f);
					break;
				case 6:
					if (iLocal_38 == 0)
					{
						iLocal_977 = 9;
						func_33(&iLocal_976, 1073741824 /* Float: 2f */);
						func_36(Global_35, iLocal_742[0], func_35("RETURN_LIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						if (iLocal_1372 == 0)
						{
							func_66(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iLocal_742[0], 0, 1065353216 /* Float: 1f */, 0);
							iLocal_1372 = 1;
						}
					}
					else
					{
						func_212(0);
						iLocal_1044 = 34;
						func_36(Global_35, iLocal_742[0], func_35("KEEP_MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_35, 1048576);
						func_197(&uLocal_1418, 0);
					}
					if (iLocal_1373 == 1)
					{
						PERSCHAR::_0x4F81EAD1DE8FA19B(func_63(16));
						iLocal_1373 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[3]))
							{
								func_64(&(iLocal_742[3]));
							}
							else
							{
								TASK::TASK_WANDER_IN_AREA(iLocal_742[3], -325.6645f, 771.7883f, 116.436f, 7f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
								PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[3]));
							}
						}
						func_65(79, 1);
					}
					iLocal_1371 = 1;
					iLocal_1363 = 1;
					iLocal_978 = 7;
					fLocal_1330 = 15f;
					func_62();
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					break;
				case 7:
					if (func_37(iLocal_976, 1073741824 /* Float: 2f */))
					{
						func_36(Global_35, iLocal_742[0], func_35("ILO_LIE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_976, 2097152);
						iLocal_1012 = 11;
					}
					else
					{
						func_36(Global_35, iLocal_742[0], func_35("ILO_GAVE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_976, 131072);
						iLocal_1012 = 9;
					}
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					break;
			}
			func_43(&(Local_1046[0 /*21*/]), 0);
			func_44(&(Local_1110[1 /*17*/]), 0, 0);
			func_44(&(Local_1110[0 /*17*/]), 0, 0);
			iLocal_1367 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]) && func_27(iLocal_742[3], 0, 1))
	{
		iVar0 = func_422(&(iLocal_742[3]), &(Local_1046[1 /*21*/]), 15f, &Local_1145, &(Local_441.f_192), 0f, 1, 0, 0, func_426(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar0 == 0)
		{
			switch (iLocal_978)
			{
				case 4:
					if (!func_427())
					{
						func_36(Global_35, iLocal_742[3], func_35("ILO_HOTEL_ENTER_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_36(Global_35, iLocal_742[3], func_35("ILO_HOTEL_ENTER_A_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_33(&iLocal_976, 256);
					iLocal_1012 = 4;
					break;
				case 5:
					break;
				case 6:
					func_36(Global_35, iLocal_742[3], func_35("ILO_EXIT_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_33(&iLocal_976, 4096);
					iLocal_1012 = 6;
					break;
			}
			func_44(&(Local_1145[0 /*17*/]), 0, 0);
			func_44(&(Local_1145[1 /*17*/]), 0, 0);
		}
		else if (iVar0 == 1)
		{
			switch (iLocal_978)
			{
				case 4:
					if (!func_427())
					{
						func_36(Global_35, iLocal_742[3], func_35("ILO_HOTEL_ENTER_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_36(Global_35, iLocal_742[3], func_35("ILO_HOTEL_ENTER_B_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_33(&iLocal_976, 512);
					iLocal_1012 = 5;
					break;
				case 5:
					break;
				case 6:
					func_36(Global_35, iLocal_742[3], func_35("ILO_EXIT_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1012 = 7;
					func_33(&iLocal_976, 8192);
					break;
			}
			func_44(&(Local_1145[0 /*17*/]), 0, 0);
			func_44(&(Local_1145[1 /*17*/]), 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[1]) && func_27(iLocal_742[1], 0, 1))
	{
		iVar0 = func_422(&(iLocal_742[1]), &(Local_1046[2 /*21*/]), 15f, &Local_1180, &(Local_441.f_192), 0f, 1, 0, 0, func_426(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
}

void func_179()
{
	int iVar0;

	if (iLocal_1369 == 1)
	{
		return;
	}
	if (iLocal_978 == 2)
	{
		func_420();
	}
	iVar0 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]) && func_27(iLocal_742[0], 0, 1))
	{
		iVar0 = func_422(&(iLocal_742[0]), &(Local_1046[0 /*21*/]), 15f, &Local_1110, &(Local_441.f_192), 0f, 1, 0, 0, func_421(), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar0 == 0)
		{
			switch (iLocal_978)
			{
				case 0:
					if (func_37(iLocal_35, 8))
					{
						func_36(Global_35, iLocal_742[0], func_35("EARLY_POS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_36(Global_35, iLocal_742[0], func_35("EARLY_POS_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1375 = 1;
					break;
				case 1:
					func_36(Global_35, iLocal_742[0], "RE_DAA_NBX_V2_ILO_SECOND_POS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 2:
					iLocal_977 = 8;
					func_228(&(Local_441.f_5), 0);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_3, ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_742[0], 2), 2);
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_3, "pedPlayer", &Local_912, true, "pbl_handover", 2))
					{
					}
					if (func_38(iLocal_742[0], 1, 1) > 5f)
					{
						func_36(Global_35, iLocal_742[0], "RE_TOWNR_VAL_V2_I_FORGOT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_977 = 8;
					iLocal_1371 = 1;
					iLocal_1044 = 31;
					iLocal_1363 = 1;
					iLocal_978 = 7;
					fLocal_1330 = 15f;
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
					break;
				case 7:
					if (func_37(iLocal_976, 1073741824 /* Float: 2f */))
					{
						func_36(Global_35, iLocal_742[0], func_35("ILO_LIE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_976, 1048576);
						iLocal_1012 = 10;
					}
					else
					{
						func_36(Global_35, iLocal_742[0], func_35("ILO_GAVE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_976, 65536);
						iLocal_1012 = 8;
					}
					break;
			}
			func_43(&(Local_1046[0 /*21*/]), 0);
			func_44(&(Local_1110[0 /*17*/]), 0, 0);
			func_44(&(Local_1110[1 /*17*/]), 0, 0);
			iLocal_1366 = 0;
			iLocal_1367 = 0;
			func_43(&(Local_1046[0 /*21*/]), 0);
		}
		else if (iVar0 == 1)
		{
			switch (iLocal_978)
			{
				case 0:
					if (func_37(iLocal_35, 8))
					{
						func_36(Global_35, iLocal_742[0], func_35("EARLY_NEG_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_36(Global_35, iLocal_742[0], func_35("EARLY_NEG_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1375 = 1;
					break;
				case 1:
					func_36(Global_35, iLocal_742[0], "RE_DAA_NBX_V2_ILO_QUIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_33(&iLocal_35, 2048);
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
					break;
				case 2:
					func_212(0);
					iLocal_1044 = 34;
					func_36(Global_35, iLocal_742[0], func_35("KEEP_MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_33(&iLocal_35, 1048576);
					func_197(&uLocal_1418, 0);
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1371 = 1;
					iLocal_1363 = 1;
					iLocal_978 = 7;
					fLocal_1330 = 15f;
					func_428();
					break;
				case 7:
					if (func_37(iLocal_976, 1073741824 /* Float: 2f */))
					{
						func_36(Global_35, iLocal_742[0], func_35("ILO_LIE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_976, 2097152);
						iLocal_1012 = 11;
					}
					else
					{
						func_36(Global_35, iLocal_742[0], func_35("ILO_GAVE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_33(&iLocal_976, 131072);
						iLocal_1012 = 9;
					}
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					break;
			}
			func_43(&(Local_1046[0 /*21*/]), 0);
			func_44(&(Local_1110[1 /*17*/]), 0, 0);
			iLocal_1367 = 0;
		}
	}
}

void func_180()
{
	if (!func_169(Global_35, 0) && Local_441.f_46 == 0)
	{
		switch (iLocal_1012)
		{
			case 0:
				if ((func_37(iLocal_976, 1) && !func_37(iLocal_976, 4)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "GENERIC_GOODBYE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					func_33(&iLocal_976, 4);
				}
				break;
			case 1:
				if ((func_37(iLocal_976, 2) && !func_37(iLocal_976, 8)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					func_33(&iLocal_976, 8);
				}
				break;
			case 2:
				if ((func_37(iLocal_976, 16) && !func_37(iLocal_976, 64)) && !func_169(iLocal_742[0], 0))
				{
					func_36(iLocal_742[0], Global_35, func_35("GET_ON_ALREADY_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					Local_692.f_7 = 3500;
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[0], &Local_692);
					func_33(&iLocal_35, 64);
					func_44(&(Local_1110[1 /*17*/]), 1, 0);
					func_33(&iLocal_976, 64);
					func_153(&uLocal_1424, -4f);
				}
				break;
			case 3:
				if ((func_37(iLocal_976, 32) && !func_37(iLocal_976, 128)) && !func_169(iLocal_742[0], 0))
				{
					func_33(&iLocal_976, 128);
					func_46(&iLocal_1217);
					func_45();
					iLocal_1382 = 0;
					iLocal_1044 = 15;
					iLocal_978 = 3;
					fLocal_1330 = 15f;
					func_44(&(Local_1110[0 /*17*/]), 0, 0);
					func_44(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					iLocal_1363 = 1;
				}
				break;
			case 4:
				if (((func_37(iLocal_976, 256) && !func_37(iLocal_976, 1024)) && func_27(iLocal_742[3], 0, 1)) && !func_169(iLocal_742[3], 0))
				{
					if (func_427())
					{
						func_36(iLocal_742[3], Global_35, func_35("ILO_HOTEL_ENTER_WARN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_36(iLocal_742[3], Global_35, func_35("ILO_HOTEL_ENTER_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_33(&iLocal_976, 1024);
				}
				break;
			case 5:
				if (((func_37(iLocal_976, 512) && !func_37(iLocal_976, 2048)) && func_27(iLocal_742[3], 0, 1)) && !func_169(iLocal_742[3], 0))
				{
					if (func_427())
					{
						func_36(iLocal_742[3], Global_35, func_35("ILO_HOTEL_ENTER_WARN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_36(iLocal_742[3], Global_35, func_35("ILO_HOTEL_ENTER_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_33(&iLocal_976, 2048);
				}
				break;
			case 6:
				if (((func_37(iLocal_976, 4096) && !func_37(iLocal_976, 16384)) && func_27(iLocal_742[3], 0, 1)) && !func_169(iLocal_742[3], 0))
				{
					func_36(iLocal_742[3], Global_35, func_35("ILO_EXIT_POS_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_33(&iLocal_976, 16384);
				}
				break;
			case 7:
				if (((func_37(iLocal_976, 8192) && !func_37(iLocal_976, 32768)) && func_27(iLocal_742[3], 0, 1)) && !func_169(iLocal_742[3], 0))
				{
					func_36(iLocal_742[3], Global_35, func_35("ILO_EXIT_NEG_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_33(&iLocal_976, 32768);
				}
				break;
			case 8:
				if ((func_37(iLocal_976, 65536) && !func_37(iLocal_976, 262144)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "GENERIC_GOODBYE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 2, 1);
					func_33(&iLocal_976, 262144);
				}
				break;
			case 9:
				if ((func_37(iLocal_976, 131072) && !func_37(iLocal_976, 524288)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "INSULT_RESPONSE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 2, 1);
					func_33(&iLocal_976, 524288);
				}
				break;
			case 10:
				if ((func_37(iLocal_976, 1048576) && !func_37(iLocal_976, 4194304)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					func_33(&iLocal_976, 4194304);
				}
				break;
			case 11:
				if ((func_37(iLocal_976, 2097152) && !func_37(iLocal_976, 8388608)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					func_33(&iLocal_976, 8388608);
				}
				break;
			case 12:
				if ((func_37(iLocal_976, 16777216) && !func_37(iLocal_976, 268435456)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "WON_DISPUTE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 2, 1);
					func_33(&iLocal_976, 268435456);
				}
				break;
			case 13:
				if ((func_37(iLocal_976, 33554432) && !func_37(iLocal_976, 536870912)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					func_33(&iLocal_976, 536870912);
				}
				break;
			case 14:
				if ((func_37(iLocal_976, 67108864) && !func_37(iLocal_976, 268435456)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "WON_DISPUTE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 2, 1);
					func_33(&iLocal_976, 268435456);
				}
				break;
			case 15:
				if ((func_37(iLocal_976, 134217728) && !func_37(iLocal_976, 536870912)) && !func_169(iLocal_742[0], 0))
				{
					func_412(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					func_33(&iLocal_976, 536870912);
				}
				break;
		}
	}
}

void func_181()
{
	if (iLocal_978 == 3 || iLocal_978 == 7)
	{
		return;
	}
	if (func_27(iLocal_742[0], 0, 1))
	{
		if (func_165(Global_35, iLocal_742[0], 1, 1) > fLocal_1330)
		{
			if (iLocal_1365 == 1)
			{
				iLocal_1365 = 0;
				func_44(&(Local_1110[0 /*17*/]), 0, 0);
				func_44(&(Local_1110[1 /*17*/]), 0, 0);
			}
		}
		else if (iLocal_1365 == 0)
		{
			iLocal_1365 = 1;
			if (iLocal_1366 == 1)
			{
				func_44(&(Local_1110[0 /*17*/]), 1, 0);
			}
			if (iLocal_1367 == 1)
			{
				func_44(&(Local_1110[1 /*17*/]), 1, 0);
			}
		}
	}
}

void func_182()
{
	if (!func_27(iLocal_742[0], 0, 1))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -471636559) && !func_37(iLocal_35, 1))
	{
		func_33(&iLocal_35, 1);
		func_36(iLocal_742[0], Global_35, func_35("CALLOVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_429(1891783641, iLocal_742[0], 1);
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 7f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -11166485) && !func_37(iLocal_35, 32))
	{
		func_33(&iLocal_35, 32);
		func_36(iLocal_742[0], Global_35, func_35("CALLOVER_NEAR"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_429(1891783641, iLocal_742[0], 1);
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 7f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -305879829) && iLocal_38 == 0)
	{
		func_36(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 50253663) && iLocal_38 == 1)
	{
		func_36(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 124952755) && iLocal_38 == 0)
	{
		func_36(iLocal_742[0], Global_35, func_35("NO_MONEY_RETURN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], joaat("NO_MONEY_RETURN_LIE_B")) && iLocal_38 == 1)
	{
		func_36(iLocal_742[0], Global_35, func_35("NO_MONEY_RETURN_LIE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1790359959))
	{
		if (!func_37(iLocal_35, 8))
		{
			func_36(iLocal_742[0], Global_35, func_35("EASYMONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1543070371))
	{
		func_36(iLocal_742[0], Global_35, func_35("RETURN_CALLOVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -1763286265))
	{
		if (!func_37(iLocal_35, 8))
		{
			iLocal_1341 = 1;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -1007549597))
	{
		if (!func_37(iLocal_35, 8))
		{
			func_36(iLocal_742[0], Global_35, func_35("EXPLANATION"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -1007549597))
	{
		if (func_37(iLocal_35, 8))
		{
			func_36(iLocal_742[0], Global_35, func_35("EXPLANATION_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1429831326) && (!func_430() || !func_37(iLocal_35, 4)))
	{
		func_36(iLocal_742[0], Global_35, func_35("THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -275178156) && func_430())
	{
		if (func_37(iLocal_35, 4))
		{
			func_36(iLocal_742[0], Global_35, func_35("SICK_THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -576429230) && iLocal_1371 == 0)
	{
		if (iLocal_38 == 0)
		{
			func_36(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -885113210) && iLocal_1371 == 0)
	{
		if (iLocal_38 == 1 && func_51(115, 2) == 0)
		{
			func_36(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -169015154) && iLocal_1371 == 0)
	{
		if (iLocal_38 == 1 && func_51(115, 2) == 1)
		{
			func_36(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_LIE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 305119592) && iLocal_1371 == 0)
	{
		if (!func_37(iLocal_35, 8))
		{
			func_36(iLocal_742[0], Global_35, func_35("OFFER_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1340 = 1;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1544633646) && iLocal_1371 == 0)
	{
		if (func_37(iLocal_35, 8))
		{
			func_36(iLocal_742[0], Global_35, func_35("OFFER_D_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1340 = 1;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 185497310) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1411149204))
	{
		if (!func_37(iLocal_35, 8))
		{
			func_36(iLocal_742[0], Global_35, func_35("JOBDETAIL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_33(&iLocal_35, 131072);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1306076711))
	{
		if (func_37(iLocal_35, 8))
		{
			func_36(iLocal_742[0], Global_35, func_35("JOBDETAIL_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_33(&iLocal_35, 131072);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -68988721))
	{
		func_36(iLocal_742[0], Global_35, func_35("DECLINE_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (iLocal_1355 == 1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1855570124))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_643[1 /*12*/].f_8, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_635.f_3))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
			{
				ENTITY::DETACH_ENTITY(Local_643[1 /*12*/].f_8, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_643[1 /*12*/].f_8, iLocal_742[0], 0, PED::GET_PED_BONE_INDEX(iLocal_742[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1856475125))
		{
			ENTITY::DETACH_ENTITY(Local_643[1 /*12*/].f_8, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_643[1 /*12*/].f_8, iLocal_742[0], 0, PED::GET_PED_BONE_INDEX(iLocal_742[0], 37709), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			func_428();
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 334590072))
		{
			OBJECT::DELETE_OBJECT(&(Local_643[1 /*12*/].f_8));
		}
	}
}

void func_183(bool bParam0)
{
	if (bParam0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1470))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1470, true, 0))
			{
				if (func_431(Global_35, iLocal_1470))
				{
					bLocal_1359 = false;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]) && iLocal_1361 == 1)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_742[3], false);
						iLocal_1361 = 0;
						func_34(joaat("CRIME_ASSAULT"), iLocal_742[2], 1, 2f);
						func_36(iLocal_742[3], Global_35, func_35("HEARD_SHOTS_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					return;
				}
				LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, -1);
				if (iLocal_1358 == 0)
				{
					LAW::_0x710448D44A64C213(0);
					LAW::_0xC805EB785824F712(0);
					iLocal_1358 = 1;
				}
			}
			else if (iLocal_1358 == 1)
			{
				LAW::_0x710448D44A64C213(1);
				LAW::_0xC805EB785824F712(1);
				iLocal_1358 = 0;
			}
		}
	}
	else if (iLocal_1358 == 1)
	{
		LAW::_0x710448D44A64C213(1);
		LAW::_0xC805EB785824F712(1);
		iLocal_1358 = 0;
	}
}

bool func_184()
{
	int iVar0;
	int iVar1;

	if (func_37(iLocal_35, 8192))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1464))
	{
		iVar0 = func_432();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (func_433(Global_35, joaat("RANSACK_PROP_DRAWER_DOUBLE_4_OPEN")) && iVar1 == ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_1464))
			{
				ENTITY::_0xD2B9C78537ED5759(uLocal_1222);
				return true;
			}
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(joaat("P_DRESSER03X")))
	{
		if (ENTITY::_0x1FF441D7954F8709(uLocal_1222))
		{
			iLocal_1464 = ENTITY::_0x4735E2A4BB83D9DA(uLocal_1222);
		}
		else
		{
			uLocal_1222 = ENTITY::_0x6F3068258A499E52(joaat("P_DRESSER03X"), -323.387f, 758.9651f, 116.4372f, 5);
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("P_DRESSER03X"), false);
	}
	return false;
}

void func_185()
{
	var uVar0;
	vector3 vVar12;

	ENTITY::SET_ENTITY_COORDS(Local_643[2 /*12*/].f_8, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1464, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1464, "p_DRAWER_DBL_Drawer4")), true, false, true, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_643[2 /*12*/].f_8, iLocal_1464, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1464, "p_DRAWER_DBL_Drawer4"), 0.287f, 0.213f, -0.01f, 0f, 0f, -37f, false, false, false, false, 2, true, false, false);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_2, "Bills", &uVar0, false, 0, 2))
	{
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "Bills", Local_643[2 /*12*/].f_8, 0);
	vVar12 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1464, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1464, "p_DRAWER_DBL_Drawer4")) };
	func_46(&iLocal_1217);
	if (!func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_434(-323.4462f, 759.2699f, 117.259f, &iLocal_1217, 408396114, 0, "ROB_MONEY_BLIP", 0);
		if (MAP::DOES_BLIP_EXIST(iLocal_1217))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_MONEY_BLIP");
		}
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", false);
	func_197(&uLocal_1430, 0);
}

void func_186()
{
	func_435();
	func_101(&iLocal_1465, vLocal_892, vLocal_895, vLocal_898, "Restriction");
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1465))
	{
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_1465, 534496, 0, 0, -1, -1, 2);
		POPULATION::_0xB56D41A694E42E86(iLocal_1465, 534496, 0, 0, -1, -1, 2);
		uLocal_1480 = PED::_0x4C39C95AE5DB1329(iLocal_1465, 0, 15);
	}
	func_18(&uLocal_1468, &uLocal_1482, -295.0984f, 776.1786f, 117.6907f, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f, 0, 0, 1, 0, 0);
}

void func_187()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1472))
	{
		func_101(&iLocal_1472, Local_1223.f_66, Local_1223.f_69, Local_1223.f_72, "ExcludeMidRange");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1473))
	{
		func_101(&iLocal_1473, Local_1223.f_75, Local_1223.f_78, Local_1223.f_81, "TriggerDialogue");
	}
}

void func_188(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_268(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_2;
	}
	return 0;
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_436(iParam3, 1);
	bVar1 = func_436(iParam3, 2);
	bVar2 = !func_436(iParam3, 4);
	bVar3 = func_436(iParam3, 8);
	bVar4 = !func_436(iParam3, 16);
	bVar5 = func_436(iParam3, 32);
	bVar6 = func_436(iParam3, 64);
	return func_437(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_191(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_27(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_302(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_64(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, iParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (func_27(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_223(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

Vector3 func_193(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	func_438(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

bool func_194(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_195(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_348(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_347())
	{
		bVar1 = true;
		fVar3 = func_302(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_349(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_349(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (func_350(&(uParam0->f_121), iParam4, fParam1))
		{
			func_118(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_305(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_117(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_118(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_305(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_196()
{
	char* sVar0;

	sVar0 = "callout_far_a_front";
	iLocal_1216 = func_439(iLocal_742[0], Global_35, 0.85f);
	if (iLocal_1216 == 3)
	{
		sVar0 = "callout_far_b_left";
	}
	else if (iLocal_1216 == 0)
	{
		sVar0 = "callout_far_a_front";
	}
	else if (iLocal_1216 == 2)
	{
		sVar0 = "callout_far_a_right";
	}
	else
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, sVar0))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, sVar0);
		return false;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, sVar0, true);
	EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 7f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	return true;
}

void func_197(var uParam0, bool bParam1)
{
	if (bParam1 || !func_155(uParam0))
	{
		func_209(uParam0);
	}
}

void func_198()
{
	if (func_37(iLocal_35, 4))
	{
		if (!func_155(&uLocal_1433) && !bLocal_881)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Global_36, 1f, -1, 5f, 0, 40000f);
			func_158(iLocal_742[0], &iLocal_1219, 0, 0, 1, 1);
			Local_441.f_44 = 1;
			func_197(&uLocal_1433, 0);
		}
		if (func_30(&uLocal_1433) > 1f)
		{
			if (!bLocal_881)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[14 /*2*/], Local_360[14 /*2*/].f_1, Global_35, 4066, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				func_158(iLocal_742[0], &iLocal_1219, 0, 0, 1, 1);
				func_429(1891783641, iLocal_742[0], 1);
				if (!func_200(iLocal_1479, 1, 1))
				{
					iLocal_1479 = func_440(iLocal_742[0], iLocal_1477, 28);
				}
				if (iLocal_38 == 1)
				{
					func_203();
				}
				bLocal_881 = true;
			}
		}
	}
}

void func_199()
{
	float fVar0;

	fVar0 = func_38(iLocal_742[0], 1, 1);
	if (((!bLocal_881 && !func_202()) && fVar0 < 15f) && func_30(&uLocal_1448) > 5f)
	{
		iLocal_1216 = func_439(iLocal_742[0], Global_35, 0.85f);
		func_44(&(Local_1110[0 /*17*/]), 0, 0);
		func_44(&(Local_1110[1 /*17*/]), 0, 0);
		if (iLocal_1216 == 3)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "callout_near_b_left", true);
		}
		else if (iLocal_1216 == 1)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "callout_near_c_behind", true);
		}
		else if (iLocal_1216 == 0)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "callout_near_a_front", true);
		}
		else if (iLocal_1216 == 2)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "callout_near_a_right", true);
		}
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 7f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
		bLocal_881 = true;
	}
}

bool func_200(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::_DOES_VOLUME_EXIST(Global_1955500[iParam0 /*16*/].f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(Global_1955500[iParam0 /*16*/].f_2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_201(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_441(&(uParam1->f_3), 1))
	{
		func_442(uParam1);
		if (func_443(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			func_444();
		}
	}
	if (func_445(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_446(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

bool func_202()
{
	if (!func_27(iLocal_742[0], 0, 1))
	{
		return false;
	}
	if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], "script_re@town_robbery", "callout_far_a", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], "script_re@town_robbery", "callout_far_b", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], "script_re@town_robbery", "callout_far_c", 1)) || ((((ANIMSCENE::_0x8D81E7824B7753F7(Local_635, "callout_far_a_right", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_635, "callout_far_a_front", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_635, "callout_far_b_left", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_635, "callout_far_c_behind", 1)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_742[0], Local_635)))
	{
		func_209(&uLocal_1448);
		return true;
	}
	return false;
}

void func_203()
{
	float fVar0;

	if (iLocal_1352 == 0)
	{
		return;
	}
	if (func_27(iLocal_742[0], 0, 1))
	{
		fVar0 = func_38(iLocal_742[0], 1, 1);
		if (fVar0 < 60f)
		{
			if (!MAP::DOES_BLIP_EXIST(uLocal_747[0]))
			{
				func_207(iLocal_742[0], &(uLocal_747[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_747[0], "RE_INTER_STRANGER");
			}
		}
		else if (MAP::DOES_BLIP_EXIST(uLocal_747[0]))
		{
			func_46(&(uLocal_747[0]));
		}
	}
}

bool func_204(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!*iParam1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, 3f, 0.55f, -1f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, iParam2, 2f, 0.2f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		if (bParam3)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 1f, 1.5f);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		*iParam1 = 1;
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) == 1 && TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) != 1)
	{
		return true;
	}
	return false;
}

void func_205(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam2, sParam3, iParam1, -1, fParam5, fParam6, iParam4 | 67108864 | 16 | 512, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_1218);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
}

void func_206()
{
	iLocal_910 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("WALK_AND_TALK_LIMIT");
	switch (Local_441.f_51.f_4)
	{
		case 0:
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -298.554f, 771.1042f, 115.64f, 0f, 0f, -168.864f, 5.732f, 16.59006f, 13.342f);
			break;
		case 1:
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -276.9812f, 765.787f, 120.118f, 0f, 0f, 101.1443f, 2.233379f, 9.048092f, 7.820213f);
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -267.5336f, 768.861f, 115.64f, 0f, 0f, -102.7909f, 14.04811f, 9.365322f, 13.342f);
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -281.2135f, 760.3973f, 115.64f, 0f, 0f, -102.7909f, 11.71382f, 2.329226f, 13.342f);
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -286.3327f, 754.0031f, 118.9547f, 0f, 0f, 99.16987f, 5.646725f, 10.09923f, 4.382039f);
			break;
		case 2:
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -348.7863f, 804.9543f, 115.64f, 0f, 0f, -168.864f, 14.04811f, 16.94197f, 13.342f);
			break;
	}
}

void func_207(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_208(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_209(var uParam0)
{
	func_153(uParam0, 0f);
}

int func_210(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (ENTITY::IS_ENTITY_DEAD(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return 0;
	}
	vVar0 = { func_447(iParam1) };
	vVar3 = { func_447(iParam2) };
	return func_448(uParam0, vVar0, vVar3, 0);
}

bool func_211(int iParam0, int iParam1, float fParam2)
{
	return func_449(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

void func_212(int iParam0)
{
	func_171(&uLocal_0);
	func_450(1, iParam0, 0);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	func_451();
}

bool func_213(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_214(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, sParam4, iParam5, iParam6, fParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_452(iParam0, iParam1, iParam18);
	}
}

void func_215(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

int func_216(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_217(int* iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	func_109(iParam0, 1);
	func_108(iParam0, sParam1, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_218(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_174(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_175(&(iParam1->f_6), 0, 1);
	}
	if (!func_174(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_453(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_454(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_174(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_455(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_456(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_457(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_336(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_456(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_338(iParam1->f_6, 0, 1);
				}
				else
				{
					func_338(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_219(int* iParam0, char* sParam1)
{
	if (func_174(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_337(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_173(iParam0, 1);
}

void func_220(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 20);
		if (bParam2)
		{
			MISC::SET_BIT(iParam0, 21);
		}
		else
		{
			MISC::CLEAR_BIT(iParam0, 21);
		}
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 20);
		MISC::CLEAR_BIT(iParam0, 21);
	}
}

float func_221(int iParam0, int iParam1)
{
	return func_165(iParam0, iParam1, 1, 1);
}

float func_222(var uParam0)
{
	if (!func_155(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_156(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_157() - uParam0->f_1);
}

int func_223(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_224(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_458(uParam0);
		func_459(iParam1, uParam2);
	}
	func_460(*uParam0, 1, bParam4);
}

bool func_225(int iParam0, var uParam1, int iParam2, var uParam3, float fParam4, float fParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (func_461(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0f;
		return true;
	}
	if (fParam6 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return false;
		}
	}
	if (func_462(iParam0, fParam5))
	{
		if (func_463(vVar0, iParam0, uParam1, iParam2, uParam3, fParam4, fParam5, bParam7, fParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0f;
	}
	return false;
}

void func_226(var uParam0)
{
	func_171(uParam0);
	func_464(&(uParam0->f_3), 1);
	uParam0->f_4 = 0;
}

void func_227()
{
	switch (iLocal_1388)
	{
		case 0:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[4 /*2*/], Local_360[4 /*2*/].f_1, Global_35, -1, 4f, -4f, 67109376, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
				iLocal_1388++;
			}
			break;
		case 1:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[5 /*2*/], Local_360[5 /*2*/].f_1, Global_35, -1, 4f, -4f, 67109376, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
				iLocal_1388++;
			}
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[6 /*2*/], Local_360[6 /*2*/].f_1, Global_35, -1, 4f, -4f, 67109376, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
				iLocal_1388++;
			}
			break;
		case 3:
			break;
	}
}

void func_228(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_59(iParam0, 1024);
	}
	else
	{
		func_60(iParam0, 1024);
	}
}

void func_229(int iParam0)
{
	if (!func_289(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_46 = 1;
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_231(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

bool func_232(float fParam0)
{
	return !func_41(fParam0, 1, 0, 0);
}

float func_233(vector3 vParam0, int iParam3)
{
	return func_49(Global_35, vParam0, iParam3);
}

void func_234(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_235(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, int iParam12)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam10)
		{
			func_100(iParam0, vParam1, vParam4, vParam7);
		}
		else
		{
			func_102(iParam0, vParam1, vParam4, vParam7);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam11, iParam12, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam11, iParam12, 0, -1, -1, 0);
	}
}

void func_236(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_52(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

void func_237()
{
	if (func_27(iLocal_742[0], 0, 1) && !func_32(iLocal_742[0], 1435919172))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_742[0], Global_35, -1, -1f, -1f, -1f);
		if (func_155(&uLocal_1421))
		{
			func_209(&uLocal_1421);
		}
		else
		{
			func_197(&uLocal_1421, 0);
		}
	}
	if (func_27(iLocal_742[0], 0, 1) && func_32(iLocal_742[0], -875674219))
	{
		if (func_49(Global_35, Local_1223.f_6, 1) > 4f)
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_742[0], iLocal_1220, 0, 0, true, false, 0, false, -1f, false);
		}
	}
}

void func_238()
{
	if (func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		if (iLocal_1351 == 0)
		{
			iLocal_1351 = 1;
			func_46(&iLocal_1217);
			func_236("ROB_OBJ06", 7500, 0, 0, -1, -1, 0);
			func_465(Local_441.f_162, 0.001f, 1);
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", false);
		}
	}
	else if (iLocal_1351 == 1)
	{
		if (func_37(iLocal_35, 8192))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				func_434(-323.4462f, 759.2699f, 117.259f, &iLocal_1217, 408396114, 0, "ROB_MONEY_BLIP", 0);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_MONEY_BLIP");
			}
			func_465(Local_441.f_162, 1.5f, 1);
		}
		else if (iLocal_1044 == 22)
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				iLocal_1217 = MAP::_0xA6EF0C54A3443E70(1259054292, iLocal_1470);
				if (MAP::DOES_BLIP_EXIST(iLocal_1217))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
				}
			}
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				iLocal_1217 = MAP::_0xA6EF0C54A3443E70(1259054292, iLocal_1469);
				if (MAP::DOES_BLIP_EXIST(iLocal_1217))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
				}
			}
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
		}
		func_236("ROB_OBJ02B", 7500, 0, 0, -1, -1, 0);
		iLocal_1351 = 0;
	}
}

void func_239()
{
	struct<7> Var0;

	if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_742[0], 4f, 4f, 4f, false, true, 0))
	{
		if (!func_37(iLocal_35, 64))
		{
			if (func_30(&uLocal_1424) > 4f && func_41(0, 1, 0, 0))
			{
				func_33(&iLocal_35, 64);
				func_209(&uLocal_1424);
			}
			else if (!func_155(&uLocal_1424))
			{
				func_197(&uLocal_1424, 0);
			}
		}
		else if (!func_37(iLocal_35, 65536))
		{
			if (func_30(&uLocal_1424) > 7f && func_41(0, 1, 0, 0))
			{
				func_36(iLocal_742[0], Global_35, func_35("GET_ON_ALREADY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_33(&iLocal_35, 65536);
				func_209(&uLocal_1424);
			}
		}
		else if (func_30(&uLocal_1424) > 15f && func_41(0, 1, 0, 0))
		{
			func_36(iLocal_742[0], Global_35, func_35("TIME_OUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_46(&iLocal_1217);
			Var0.f_3 = 1065353216;
			Var0.f_4 = -1;
			Var0.f_5 = 1048576000;
			Var0.f_6 = 1193033728;
			Var0 = { Local_1223.f_93 };
			Var0.f_3 = 1f;
			Var0.f_4 = -1;
			Var0.f_5 = 0.25f;
			Var0.f_6 = Local_1223.f_96;
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
			TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var0);
			func_42(0, joaat("WORLD_HUMAN_SMOKE"), -1, 1, 0, -1082130432 /* Float: -1f */);
			func_158(iLocal_742[0], &iLocal_1219, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
			iLocal_978 = 3;
			fLocal_1330 = 15f;
			func_44(&(Local_1110[0 /*17*/]), 0, 0);
			func_44(&(Local_1110[1 /*17*/]), 0, 0);
			func_171(&uLocal_1424);
			func_12();
		}
	}
}

void func_240()
{
	if (func_37(iLocal_35, 8388608))
	{
		return;
	}
	switch (iLocal_1389)
	{
		case 0:
			iLocal_742[3] = func_245(Local_752[3 /*32*/].f_1, &(Local_752[3 /*32*/]), -325.5149f, 772.9968f, 116.4359f, 4.96f, 1, 0, 1, 0, 1);
			func_188(iLocal_742[3], joaat("WORLD_HUMAN_SHOPKEEPER"), -325.5172f, 773.0236f, 116.4359f, 11.13f, -1, 1, 1, 0, -1082130432 /* Float: -1f */);
			iLocal_1389++;
			if (iLocal_1373 == 0)
			{
				iLocal_1373 = 1;
			}
			func_110(iLocal_742[3], &(Local_752[3 /*32*/].f_23), 0);
			break;
		case 1:
			if (func_27(iLocal_742[3], 0, 1) && !func_32(iLocal_742[3], 1435919172))
			{
				func_188(iLocal_742[3], joaat("WORLD_HUMAN_SHOPKEEPER"), -325.5172f, 773.0236f, 116.4359f, 11.13f, -1, 0, 1, 0, -1082130432 /* Float: -1f */);
				func_110(iLocal_742[3], &(Local_752[3 /*32*/].f_23), 0);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1471))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1471, true, 0))
				{
					func_197(&uLocal_1415, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[3], iLocal_1471, true, 0))
					{
						func_110(iLocal_742[3], &(Local_752[3 /*32*/].f_23), 0);
						func_212(0);
						if (func_427())
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
							TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "Default_Nervous", 2f, 0f, 4);
							func_188(0, joaat("WORLD_HUMAN_SHOPKEEPER"), -325.5172f, 773.0236f, 116.4359f, 11.13f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_742[3], iLocal_1219);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
							PED::SET_PED_KEEP_TASK(iLocal_742[3], true);
						}
						if (!func_427())
						{
							func_36(iLocal_742[3], Global_35, func_35("NEED_A_ROOM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_36(iLocal_742[3], Global_35, func_35("NOT_YOU"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[3], &Local_692);
					}
					iLocal_1389++;
				}
			}
			else
			{
				func_101(&iLocal_1471, Local_1223.f_26, Local_1223.f_29, Local_1223.f_32, "HotelLobby");
			}
			break;
		case 2:
			if (func_41(-4f, 1, 0, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[3], iLocal_1471, true, 0))
				{
					func_212(0);
					func_36(Global_35, Global_35, func_35("VISITING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_1389++;
			}
			break;
		case 3:
			if (!func_169(Global_35, 0) && !func_169(iLocal_742[3], 0))
			{
				func_44(&(Local_1145[0 /*17*/]), 1, 0);
				func_44(&(Local_1145[1 /*17*/]), 1, 0);
				iLocal_1389++;
			}
			break;
		case 4:
			if (!func_37(iLocal_35, 8388608))
			{
				func_33(&iLocal_35, 8388608);
			}
			break;
	}
}

void func_241(var uParam0)
{
	if (!func_155(uParam0))
	{
	}
	if (!func_156(uParam0))
	{
		uParam0->f_2 = (func_157() - uParam0->f_1);
		func_407(uParam0, 2);
	}
}

bool func_242(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_174(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_454(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0, 0);
			func_465(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_466(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		else
		{
			if (func_194(vParam2))
			{
				return false;
			}
			*uParam0 = func_467(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_336(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_216(1))
			{
				func_338(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_468(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_469(*uParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				func_338(*uParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			func_338(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_216(1))
		{
			func_338(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_174(*uParam0))
			{
				func_175(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_470(*uParam0, 1)) || (bParam17 && func_471(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_472(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_248(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		func_175(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_243(vector3 vParam0, var uParam3)
{
	func_473(&Local_979);
	Local_979.f_1 = Global_35;
	Local_979.f_8 = { vParam0 };
	Local_979.f_19 = uParam3;
	Local_979.f_18 = 0f;
	Local_979.f_4 = 1;
	Local_979.f_14 = { Global_36 };
	func_59(&(Local_979.f_23), 1024);
	func_59(&(Local_979.f_23), 1);
	func_244(&Local_979, 106);
	MAP::DISPLAY_RADAR(false);
}

bool func_244(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !func_3(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				func_209(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (func_3(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!func_3(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!func_3(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && func_474(uParam0->f_1))
					{
						func_475(uParam0->f_1);
						iVar0 = func_476(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = func_476(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						func_59(&(uParam0->f_23), 2);
					}
				}
				if (func_194(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_477(uParam0, 1, iParam1);
			}
			else
			{
				func_477(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_478(uParam0, iParam1))
			{
				func_209(&(uParam0->f_5));
				if (!func_479(uParam0, iParam1))
				{
					func_480();
				}
				func_477(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_479(uParam0, iParam1))
			{
				func_209(&(uParam0->f_5));
				if (!func_3(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, func_3(uParam0->f_23, 512), 0, 0);
				}
				func_477(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_481(uParam0, iParam1))
			{
				func_209(&(uParam0->f_5));
				if (!PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					func_59(&(uParam0->f_23), 256);
				}
				if (func_3(uParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					func_59(&(uParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (func_165(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_482(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!func_3(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_477(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_483(uParam0, iParam1))
			{
				func_209(&(uParam0->f_5));
				if (func_3(uParam0->f_23, 8192))
				{
					if (func_3(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!func_194(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_3(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!func_194(uParam0->f_11))
					{
						if (func_3(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_413(!func_3(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_413(!func_3(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_3(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_413(!func_3(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_413(!func_3(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_3(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					func_158(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_477(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_3(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_3(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!func_3(uParam0->f_23, 128) && func_167(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_3(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_194(uParam0->f_11) || !func_32(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_484(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_3(uParam0->f_23, 8)) && (!func_3(uParam0->f_23, 64) || MISC::ABSF(func_485(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_3(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				func_171(&(uParam0->f_5));
				func_477(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

int func_245(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_486(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_487(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_488(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_488(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_489(iVar0))
		{
			func_110(iVar0, &(uParam1->f_23), 0);
		}
		if (func_489(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_490(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_491(&(uParam1->f_22)));
			func_493(iVar0, func_492(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_494(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_495(&(uParam1->f_22)))
		{
			func_496(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_497(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_37(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_489(iVar0))
		{
			func_499(iVar0, !func_498(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_500(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_501(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_501(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

void func_246(var uParam0, int iParam1)
{
	PED::_SET_PED_BODY_COMPONENT(*uParam0, iParam1);
	PED::_UPDATE_PED_VARIATION(*uParam0, false, true, true, true, false);
}

void func_247(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_502(uParam0, 2);
	}
	else
	{
		func_464(uParam0, 2);
	}
}

void func_248(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_503(iParam0, sParam4, iParam5);
	}
	func_504(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_249()
{
	if (func_27(iLocal_742[2], 0, 1) && func_27(iLocal_742[0], 0, 1))
	{
		if (func_165(iLocal_742[2], iLocal_742[0], 1, 1) < 15f)
		{
			PED::_0xF1C03A5352243A30(iLocal_742[0]);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
			iLocal_1351 = 1;
			func_212(0);
			func_36(iLocal_742[0], Global_35, func_35("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
			func_12();
		}
	}
}

bool func_250(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_UNARMED"), 0))
		{
			return true;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44) && WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_44))
		{
			if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, Global_1935630.f_44, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_251(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_165(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_505(iVar0, 0)))
		{
			if (func_506(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_252(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_46(&iVar0);
}

bool func_253(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_49(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_254(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_44(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_255()
{
	switch (iLocal_1390)
	{
		case 0:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1471))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1471, true, 0))
				{
					func_197(&uLocal_1415, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[3], iLocal_1471, true, 0))
					{
						func_212(0);
						if (iLocal_1350 == 0)
						{
							func_36(iLocal_742[3], Global_35, func_35("FIST_FIGHT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (iLocal_1361 == 1)
						{
							func_36(iLocal_742[3], Global_35, func_35("HEARD_SHOTS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1361 = 0;
							func_34(joaat("CRIME_ASSAULT"), iLocal_742[2], 1, 2f);
						}
					}
					iLocal_1390++;
				}
			}
			else
			{
				func_101(&iLocal_1471, Local_1223.f_26, Local_1223.f_29, Local_1223.f_32, "HotelLobby");
			}
			break;
		case 1:
			iLocal_978 = 6;
			iLocal_1363 = 0;
			fLocal_1330 = 5f;
			func_108(&(Local_1145[0 /*17*/]), "RE_INTER_DEFUSE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
			func_43(&(Local_1046[0 /*21*/]), 0);
			func_44(&(Local_1145[0 /*17*/]), 1, 0);
			func_44(&(Local_1145[1 /*17*/]), 1, 0);
			iLocal_1390++;
			break;
		case 2:
			func_33(&iLocal_35, 8388608);
			iLocal_1390++;
			break;
		case 3:
			break;
	}
}

void func_256()
{
	float fVar0;

	if (!func_37(iLocal_35, 32768))
	{
		fVar0 = func_38(iLocal_742[0], 1, 1);
		if (func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (iLocal_1351 == 0)
			{
				iLocal_1351 = 1;
				bLocal_1353 = true;
				iLocal_1352 = 0;
				func_46(&(uLocal_747[0]));
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
				func_236("ROB_OBJ06", 7500, 0, 0, -1, -1, 0);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(uLocal_747[0]))
			{
				func_207(iLocal_742[0], &(uLocal_747[0]), 408396114, 580546400, 0, "RE_INTER_STRANGER");
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_747[0], "RE_INTER_STRANGER");
				func_236("ROB_OBJ04", 7500, 0, 0, -1, -1, 0);
			}
			iLocal_1351 = 0;
		}
		if ((fVar0 < fLocal_1328 && func_507(iLocal_742[0], Global_35, 0, 20f, 0)) && func_253(iLocal_742[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			PED::_0xF1C03A5352243A30(iLocal_742[0]);
			if (func_129(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
				func_212(0);
				func_36(iLocal_742[0], Global_35, func_35("WANTED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_62();
				func_12();
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[23 /*2*/], Local_360[23 /*2*/].f_1, Global_35, 5533, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1219);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
				func_212(0);
				func_36(iLocal_742[0], Global_35, func_35("RETURN_CALLOVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_33(&iLocal_35, 32768);
		}
	}
}

void func_257()
{
	if (func_165(Global_35, iLocal_742[0], 1, 1) > fLocal_1330)
	{
		func_44(&(Local_1110[0 /*17*/]), 0, 0);
		func_44(&(Local_1110[1 /*17*/]), 0, 0);
	}
	else
	{
		func_44(&(Local_1110[0 /*17*/]), 1, 0);
		func_44(&(Local_1110[1 /*17*/]), 1, 0);
	}
}

bool func_258()
{
	vector3 vVar0;
	float fVar3;

	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_635.f_3, false))
		{
			fLocal_1327 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_635.f_3);
		}
	}
	switch (iLocal_977)
	{
		case 0:
			if (!func_155(&uLocal_1427))
			{
				func_508(&uLocal_1427, 5f, 0);
			}
			if (func_38(iLocal_742[0], 1, 1) < 15f && func_37(iLocal_35, 1073741824 /* Float: 2f */))
			{
				switch (iLocal_1393)
				{
					case 0:
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && func_30(&uLocal_1427) > 6f)
						{
							func_205(iLocal_742[0], Global_35, Local_360[11 /*2*/], Local_360[11 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
							func_33(&iLocal_35, 16);
							func_209(&uLocal_1427);
							iLocal_1393++;
						}
						break;
					case 1:
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && func_30(&uLocal_1427) > 8f)
						{
							func_205(iLocal_742[0], Global_35, Local_360[12 /*2*/], Local_360[12 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
							func_209(&uLocal_1427);
							iLocal_1393++;
						}
						break;
					case 2:
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && func_30(&uLocal_1427) > 10f)
						{
							func_205(iLocal_742[0], Global_35, Local_360[13 /*2*/], Local_360[13 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
							func_33(&iLocal_35, 128);
							func_209(&uLocal_1427);
							iLocal_1393++;
						}
						break;
				}
			}
			break;
		case 8:
			if (!func_37(iLocal_35, 4096))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false) };
				fVar3 = ENTITY::GET_ENTITY_HEADING(iLocal_742[0]);
				func_509(&vVar0, 50, 10, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_3, vVar0, 0f, 0f, fVar3, 2);
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635.f_3, "pbl_idle", true);
					if (func_37(iLocal_35, 4))
					{
						TASK::CLEAR_PED_TASKS(iLocal_742[0], true, false);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "pedStranger", iLocal_742[0], 0);
						if (iLocal_1355 == 0)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "objMoney", Local_643[1 /*12*/].f_8, 0);
						}
					}
					ANIMSCENE::START_ANIM_SCENE(Local_635.f_3);
				}
				func_33(&iLocal_35, 4096);
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_635.f_3, false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_3, "pedPlayer", &Local_912, true, "pbl_handover", 2))
					{
						if (!func_194(Local_912) && !func_194(Local_912.f_3))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
							iLocal_1380 = 0;
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
							TASK::TASK_ACHIEVE_HEADING(0, Local_912.f_3.f_2, 0);
							TASK::TASK_STAND_STILL(0, 500);
							func_158(Global_35, &iLocal_1219, 0, 0, 1, 1);
							iLocal_977 = 2;
							func_70(115, 0, 3, 0, 0);
						}
					}
					else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635.f_3, "pbl_handover"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635.f_3, "pbl_handover");
					}
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(Local_635.f_3);
				}
			}
			break;
		case 2:
			func_243(Local_912, Local_912.f_3.f_2);
			if (ENTITY::IS_ENTITY_AT_ENTITY(PED::_GET_LAST_MOUNT(Global_35), iLocal_742[0], 4f, 4f, 4f, false, true, 0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(PED::_GET_LAST_MOUNT(Global_35), iLocal_742[0], 1, 0, 7f, -1, 0);
			}
			iLocal_977 = 3;
			break;
		case 3:
			if (func_244(&Local_979, 106))
			{
				TASK::TASK_STAND_STILL(Global_35, 5000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				iLocal_1380 = 0;
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_635.f_3, false))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635.f_3, "pbl_handover", true);
					func_428();
					Local_692.f_3 = Global_35;
					Local_717.f_3 = iLocal_742[0];
					if (func_37(iLocal_35, 4))
					{
						iLocal_977 = 4;
					}
					else
					{
						iLocal_977 = 4;
					}
				}
			}
			break;
		case 4:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_717);
			if (fLocal_1327 > 0f)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					func_36(Global_35, iLocal_742[0], func_35("RETURN_CUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_643[1 /*12*/].f_8))
				{
					if (iLocal_1355 == 0)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "objMoney", Local_643[1 /*12*/].f_8, 0);
					}
				}
				iLocal_977 = 5;
			}
			break;
		case 5:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_717);
			if (!func_37(iLocal_35, 268435456))
			{
				if (fLocal_1327 > 0.52f)
				{
					func_472(iLocal_1387, 0, 0, 1, 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
					iLocal_1380 = 1;
					func_510(iLocal_742[0], 1);
					func_511(iLocal_742[0], iLocal_1387);
					func_33(&iLocal_35, 268435456);
				}
			}
			if ((fLocal_1327 > 0.6f && !func_37(iLocal_35, 4)) || ((fLocal_1327 > 0.6f && func_37(iLocal_35, 4)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])))
			{
				if (!func_37(iLocal_35, 4))
				{
					func_212(0);
					func_36(iLocal_742[0], Global_35, func_35("MONEY_RETURN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_212(0);
					func_36(iLocal_742[0], Global_35, func_35("BOUTTIME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_977 = 6;
				MAP::DISPLAY_RADAR(true);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_635.f_3, "pedPlayer", Global_35);
			}
			break;
		case 6:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_717);
			if (((!func_37(iLocal_35, 256) && fLocal_1327 > 0.8f) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && func_41(-6f, 1, 0, 0))
			{
				func_512();
				func_33(&iLocal_35, 256);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_635.f_3, false) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
			{
				func_212(0);
				if (!func_37(iLocal_35, 4))
				{
					func_36(Global_35, iLocal_742[0], func_35("WELCOME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_513();
				func_514(Local_635.f_3);
				iLocal_977 = 7;
				iLocal_1044 = 32;
				return true;
			}
			break;
		case 9:
			if (func_41(-4f, 1, 0, 0))
			{
				func_205(iLocal_742[0], Global_35, Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
				PED::_0x89F5E7ADECCCB49C(iLocal_742[0], "angry");
				iLocal_977 = 10;
			}
			break;
		case 10:
			if (func_41(-4f, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 1))
			{
				func_212(0);
				func_36(iLocal_742[0], Global_35, func_35("NO_MONEY_RETURN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_977 = 11;
			}
			break;
		case 11:
			if (func_41(-6.5f, 1, 0, 0))
			{
				func_428();
				func_514(Local_635.f_3);
				iLocal_977 = 7;
				iLocal_1044 = 32;
				func_515();
			}
			break;
		case 7:
			break;
	}
	return false;
}

void func_259(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_516(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_277() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

void func_260(int iParam0, int iParam1)
{
	if (func_200(iParam0, 1, 1))
	{
		func_33(&(Global_1955500[iParam0 /*16*/]), iParam1);
	}
}

void func_261(var uParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0, iParam1);
}

bool func_262(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;

	if (!Global_1935630.f_27 && !bParam4)
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		fVar0 = func_165(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = func_505(PLAYER::PLAYER_PED_ID(), 0);
				if (func_517(iVar3) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					return false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				}
				vVar7 = { func_518(0) };
				vVar10 = { func_438(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_263()
{
	if (!func_519(Global_1395482.f_1))
	{
		return false;
	}
	return func_520(Global_1395482.f_1, 32);
}

bool func_264(int iParam0)
{
	if (func_96(iParam0, 1))
	{
		return false;
	}
	return (1 == func_516(iParam0) || 2 == func_516(iParam0));
}

float func_265(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_266(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

int func_267(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/];
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_521(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_269(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_270(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_522(sParam1));
}

bool func_271(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_272(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_273(int iParam0, int iParam1)
{
	if (!func_272(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] - (Global_1914319.f_15614[iParam0] && iParam1));
}

void func_274(int iParam0, int iParam1)
{
	if (!func_272(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] || iParam1);
}

int func_275(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_276(int iParam0, bool bParam1)
{
	if (!func_418(iParam0))
	{
		return;
	}
	if ((bParam1 && func_523(iParam0, 512)) || (!bParam1 && !func_523(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_524(iParam0, 512);
	}
	else
	{
		func_525(iParam0, 512);
	}
	if (func_526(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

int func_277()
{
	return Global_1572887.f_12;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_279(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_527();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_528(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_529(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_71())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_530(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_527();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_531(iVar1);
		func_533(func_532(), 0, 4000);
		func_534(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_535(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_537(func_536(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_278(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_538(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_539(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_539(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_537(func_536(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_278(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_538(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_539(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_539(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_536(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_540(10, 1);
	}
}

void func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_282(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_2 = iParam2;
}

int func_282(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_521(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1 || Global_17504.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17504.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_282(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_3 = iParam2;
}

int func_284(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = (ENTITY::GET_ENTITY_MODEL(iParam0) + SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	PED::_0xCB1A3864C524F784(iParam0, iVar0);
	return iVar0;
}

int func_285(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_541(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_542(iVar0);
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_282(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_4 = iParam2;
}

int func_287()
{
	return Global_1899515;
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_282(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_5 = iParam2;
}

bool func_289(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_290(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 || iParam0);
}

int func_291(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

bool func_292(int iParam0)
{
	if (func_543(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_293(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_292(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_294(int iParam0, bool bParam1)
{
	if (func_292(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_295(int iParam0, bool bParam1)
{
	if (func_292(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_296(int iParam0, bool bParam1)
{
	if (func_292(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_297()
{
	return true;
}

char* func_298(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_299(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 || iParam1);
}

bool func_300(var uParam0, var uParam1)
{
	if (func_96(uParam0->f_3, 16777216))
	{
		if (func_544(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_301(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_302(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_303(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_545(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_159(uParam0);
	func_546(uParam0);
	func_76(uParam0);
	if (!func_547(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_368(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_45();
	}
	if (!func_548(uParam0->f_3) && !func_96(uParam0->f_3, 256))
	{
		func_259(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_67(uParam0->f_173);
	func_67(uParam0->f_172);
}

void func_304(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_305(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_306(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_277() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_307(int iParam0)
{
	if (((func_308(iParam0, 1) && func_308(iParam0, 2)) && func_308(iParam0, 8)) && func_308(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_308(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_310(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_549(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_550(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_550(), iVar3);
		if (func_551(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_311(int iParam0)
{
	func_33(iParam0, 256);
}

void func_312(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_552(&((iParam0[iVar0 /*32*/])->f_1));
		func_552(&((iParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_313(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar0 /*8*/]))
		{
			StringCopy(uParam1[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT(uParam1[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

char* func_314(int iParam0)
{
	switch (iParam0)
	{
		case 24:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
		case 28:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
		case 30:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
		case 32:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER";
		case 25:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
		case 29:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
		case 31:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
		case 33:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM";
		default:
			break;
	}
	return "INVALID DICT";
}

bool func_315(var uParam0)
{
	if (!func_553(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_553(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_316(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_289(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_554(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_555(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_317(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_96(iParam0, 32))
	{
		if (func_556(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_557(Global_35, &(uParam1->f_12)) };
				if (!func_194(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_558(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_369(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_333());
		if (func_559(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_371(iVar0, func_370(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_371(iVar0, func_370(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_96(iParam0, 1))
		{
			func_560(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_561(iParam0);
}

bool func_318(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/].f_1 != -1)
		{
			func_562(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_116(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_563(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_563(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return true;
}

void func_319(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_564(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_96(iParam0, 1))
			{
				if (func_116(iParam0, 2))
				{
				}
			}
			func_565(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_566(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_566(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_264(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_320(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_554(iParam1))
	{
		if (!func_567(iParam1, iVar0))
		{
			vVar4 = { func_316(iParam1, iVar0) };
			if (!func_194(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_325(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_568(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_194(vVar4))
	{
	}
	return vVar1;
}

int func_321(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			func_52("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_322(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_554(iParam0))
	{
		vVar1 = { func_316(iParam0, iVar0) };
		if (func_569(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_323(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_324(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_570(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_571(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_194(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_572(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_321(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_325(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_319(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_96(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_326(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_327(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_573(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_574(iParam0, uParam2))
	{
		return false;
	}
	if (!func_575(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_576(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_328(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_329(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

void func_330(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_331(int iParam0, int iParam1)
{
	if (func_577(iParam0))
	{
		return;
	}
	if (func_578(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = iParam0;
	Global_36602++;
}

void func_332(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_60(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

char* func_333()
{
	return "unnamed";
}

bool func_334()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_335(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_579(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_580(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_245(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_581(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_39(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_579(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_580(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_582(&(uParam0->f_22)));
					Var2 = { func_579(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_580(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_245(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_583(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_110(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

void func_336(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_416(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_337(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_416(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_338(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_416(iParam0);
	if (bParam1)
	{
		func_584(iParam0, 4);
		func_585(iVar0, 1);
		func_586(iVar0, 1);
	}
	else
	{
		func_587(iParam0, 4);
		func_586(iVar0, 0);
	}
}

bool func_339(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_340(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_341()
{
	return Global_1935436 == 2;
}

void func_342(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_343(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_96(iParam0, 2))
	{
		func_589(iParam0, func_588(iParam1));
	}
	else
	{
		func_590(iParam0, func_162());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_591(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_592(iParam0, 0);
	func_593(iParam0);
	func_594(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_96(iParam0, 16))
	{
		func_344(iParam0, 0, 0, 0, 0);
	}
}

void func_344(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_595() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_289(iVar1) && !func_96(iVar1, iParam2)) && (!bParam3 || !func_359(iVar1))) && (!bParam4 || !func_596(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_597(iVar0);
			}
		}
		iVar0++;
	}
}

int func_345(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_346(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_559(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_96(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_598(2, -1, 0, 0, 0);
			}
			else
			{
				func_598(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_598(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_599(1, uParam0->f_177))
				{
					func_600(16, uParam0->f_177);
					func_601(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_602(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_598(8, -1, 0, 0, 0);
	}
}

int func_347()
{
	if (func_603(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_604())
		{
			return 1;
		}
	}
	return 0;
}

float func_348(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_96(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_96(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_96(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_96(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_96(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_96(uParam0->f_3, 1))
		{
		}
		else if (func_96(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_349(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_605(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_606(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_157() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_350(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_118(uParam0);
	return true;
}

bool func_351()
{
	return (Global_1894899 & 1 != 0 && func_2() != -1);
}

bool func_352(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (uParam0->f_98[iVar0] != 0f)
		{
			if (uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_353(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_607(func_287());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_354(int iParam0, int iParam1)
{
	return (func_345(iParam0) && iParam1) != 0;
}

bool func_355(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_608(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_609(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_610(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_611(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_612(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_613(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_614(iVar3))
	{
		return true;
	}
	return false;
}

bool func_356(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_615(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_357(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_358(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164.f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164.f_164;
		}
		if (func_616())
		{
			return true;
		}
		if (Global_1058888.f_3 && !Global_1572887.f_8)
		{
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164.f_163;
		}
		else
		{
			return Global_1898164.f_164;
		}
	}
	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		iVar0 = func_617(Global_1898164.f_1[0 /*5*/]);
		if (func_618(iVar0) && func_619(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_620(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_359(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	if (func_621(64) && func_622(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_360(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_623(iVar0) || func_624(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_361()
{
	return Global_1894899 & 4 != 0;
}

int func_362(int iParam0)
{
	if (!func_625(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_363(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_364(vector3 vParam0, int iParam3)
{
	if (!func_363(iParam3))
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_365(vector3 vParam0)
{
	float fVar0;

	if (func_194(vParam0))
	{
		return false;
	}
	fVar0 = func_302(func_351(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

bool func_366(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_IS_PLAYER_FREE_FOCUSING(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_209(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_209(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_155(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_414(uParam0, fParam2))
		{
			return true;
		}
		if (func_155(uParam0))
		{
			func_171(uParam0);
		}
	}
	return false;
}

bool func_367(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_368(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_194(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_569(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

float func_369(int iParam0)
{
	if (!func_289(iParam0))
	{
		return 0f;
	}
	if (!func_626(iParam0))
	{
		return 0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_371(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	iVar6 = func_560(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_372(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_627();
	if (Global_1935630.f_27)
	{
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630.f_44;
			}
			Global_1935630.f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_628(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630.f_30)
			{
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46))
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630.f_25)
					{
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_373(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_374(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_277() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_629(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_629(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_400(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_375(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_630(iParam0);
	}
}

bool func_376(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_400(iParam2);
	}
	else
	{
		iVar1 = func_399(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_400(iParam0);
	}
	else
	{
		iVar0 = func_399(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_3(*iParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_377(int iParam0)
{
	return iParam0->f_26;
}

bool func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_379(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_59(iParam0, 134217728);
	}
	else
	{
		func_60(iParam0, 134217728);
	}
}

float func_380(int iParam0)
{
	return iParam0->f_17;
}

bool func_381(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_3(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_382(int iParam0)
{
	return iParam0->f_18;
}

bool func_383(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_505(iVar0, 0)))
		{
			if (func_631(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_384(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_385(int iParam0)
{
	return iParam0->f_23;
}

int func_386(int iParam0)
{
	return iParam0->f_21;
}

int func_387(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_388(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_449(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_389(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
		{
			if (WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_46) || WEAPON::_IS_WEAPON_BOW(Global_1935630.f_46))
			{
				return 1;
			}
		}
	}
	if (func_632(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_390(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_391(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_357(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_392(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_357(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_393(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_357(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_394(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_395(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_633(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_396(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_397(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_49(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_398(int iParam0)
{
	return iParam0->f_24;
}

int func_399(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_400(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_401(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630.f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_394(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_165(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_165(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_402(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_615(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_403(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_403(iParam1, iVar1))
				{
					if (func_49(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_403(int iParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_404(int iParam0)
{
	if (func_71())
	{
		return false;
	}
	return func_634(Global_1347702[58 /*49*/].f_15, 1);
}

int func_405(int iParam0)
{
	return iParam0->f_20;
}

int func_406(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_407(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_408(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_409(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_410(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_411(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_412(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_635(iParam0, &Var0);
}

int func_413(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_414(var uParam0, float fParam1)
{
	if (!func_155(uParam0))
	{
		return false;
	}
	if (func_222(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_415(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_416(int iParam0)
{
	return iParam0;
}

void func_417(int iParam0)
{
	if (!func_636(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1945938[iParam0 /*18*/].f_3);
	}
	Global_1945938[iParam0 /*18*/].f_4 = 0;
	Global_1945938[iParam0 /*18*/] = 1;
	Global_1945938[iParam0 /*18*/].f_16 = 0;
	Global_1945938[iParam0 /*18*/].f_1 = 0;
	Global_1945938[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_9 = 0f;
	Global_1945938[iParam0 /*18*/].f_10 = 0;
	Global_1945938[iParam0 /*18*/].f_11 = 0;
	Global_1945938[iParam0 /*18*/].f_2 = 1;
	Global_1945938[iParam0 /*18*/].f_15 = -1f;
}

bool func_418(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

char* func_419(int iParam0)
{
	switch (func_2())
	{
		case 76:
			switch (iParam0)
			{
				case 15:
					return "val_bank_01_main";
				case 3:
					return "val_genstore_01_main";
				case 6:
					return "val_gunsmith_01_main";
				case 0:
					return "val_doctor_01_main";
				case 8:
					return "val_saloon_barber_01_main";
				default:
					break;
			}
			break;
		case 78:
			switch (iParam0)
			{
				case 6:
					return "ann_gunsmith_01_main";
				default:
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 15:
					return "bla_bank_01_main";
				case 3:
					return "bla_genstore_01_main";
				default:
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 3:
					return "arm_genstore_01_main";
				default:
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 3:
					return "tum_genstore_01_main";
				case 6:
					return "tum_gunsmith_01_main";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 6:
					return "new_gunshop_01_main";
				case 3:
					return "new_grocery_01_main";
				case 7:
					return "new_tailor01_01_main";
				default:
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 3:
					return "rho_genstore_01_main";
				case 6:
					return "rho_gunsmith_01_main";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 17:
					return "lag_01_main";
				default:
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 3:
					return "wal_trainstation_01_main";
				default:
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					return "van_exoticgoods_01_main";
				case 2:
					return "van_depot_01_main";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_420()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;

	fVar0 = func_165(Global_35, iLocal_742[0], 1, 1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false) };
	fVar4 = (Global_36.f_2 - vVar1.z);
	fVar4 = MISC::ABSF(fVar4);
	if ((((((fVar0 > 5f || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) || func_360(Global_35, 1)) || fVar4 >= 1f) || PED::IS_PED_IN_COVER(Global_35, false, true)) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_742[0], Global_35, 17))
	{
		if (iLocal_1379 == 1)
		{
			func_44(&(Local_1110[0 /*17*/]), 0, 0);
			func_44(&(Local_1110[1 /*17*/]), 0, 0);
			func_43(&(Local_1046[0 /*21*/]), 0);
			iLocal_1379 = 0;
		}
	}
	else if (iLocal_1379 == 0)
	{
		if (func_216(1) >= iLocal_1387)
		{
			func_44(&(Local_1110[0 /*17*/]), 1, 0);
		}
		func_44(&(Local_1110[1 /*17*/]), 1, 0);
		func_43(&(Local_1046[0 /*21*/]), 0);
		iLocal_1379 = 1;
	}
}

int func_421()
{
	if (iLocal_1363 == 1)
	{
		return func_426(3, 0, 0) | 64;
	}
	return 346;
}

int func_422(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_637(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_638(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_639(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_640(558))
				{
					func_641(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

int func_423(int iParam0)
{
	int iVar0;

	if (!func_271(iParam0))
	{
		return 0;
	}
	if (!func_643(func_642(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_63(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_63(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_63(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_63(iParam0));
	return 1;
}

void func_424()
{
	if (func_37(iLocal_35, 2) || func_37(iLocal_35, 4))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_20.f_1))
		{
			Local_20.f_1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-281.844f, 811.7524f, 119.7714f, 0f, 0f, -79.99864f, 3.454651f, 2.004745f, 2.801613f, "Variation_2_volLootArea");
		}
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_20.f_1))
		{
			Local_20.f_1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.6489f, 759.1587f, 117.962f, 0f, 0f, 11.5326f, 5.967499f, 4.369645f, 3.055771f, "volLootArea");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_20.f_2))
		{
			Local_20.f_2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-322.2972f, 766.4644f, 121.6935f, 0f, 0f, -80.22671f, 18.60986f, 13.51953f, 10.92944f, "volBlipArea");
		}
	}
}

void func_425()
{
	func_69(115, 6, 1);
	if (func_71())
	{
		func_281(115, 3, 0);
	}
	else
	{
		func_69(115, 3, 0);
	}
}

int func_426(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

bool func_427()
{
	if (func_71() || !func_644(6))
	{
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

void func_428()
{
	func_108(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	func_108(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	func_44(&(Local_1110[0 /*17*/]), 0, 0);
	func_44(&(Local_1110[1 /*17*/]), 0, 0);
}

void func_429(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

bool func_430()
{
	if (func_404(0))
	{
		return true;
	}
	return false;
}

bool func_431(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0))
	{
		return PED::IS_PED_SHOOTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return false;
}

int func_432()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(iVar1, "PROP");
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = PED::_0x4D0D2E3D8BC000EB(Global_35, "PROP", 1);
			}
		}
	}
	return iVar0;
}

bool func_433(int iParam0, int iParam1)
{
	return PED::_IS_PED_USING_SCENARIO_HASH(iParam0, iParam1);
}

void func_434(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	*iParam3 = MAP::_BLIP_ADD_FOR_COORD(iParam4, vParam0);
	if (iParam7 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam3, iParam5, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, sParam6);
	}
}

void func_435()
{
	switch (Local_441.f_51.f_4)
	{
		case 0:
			vLocal_892 = { -298.229f, 769.452f, 115.64f };
			vLocal_895 = { 0f, 0f, -168.864f };
			vLocal_898 = { 5.732f, 23.596f, 13.342f };
			break;
		case 1:
			vLocal_892 = { -271.004f, 766.571f, 115.64f };
			vLocal_895 = { 0f, 0f, 106.589f };
			vLocal_898 = { 11.604f, 26.212f, 13.342f };
			break;
		case 2:
			vLocal_892 = { -344.188f, 798.893f, 115.64f };
			vLocal_895 = { 0f, 0f, -168.864f };
			vLocal_898 = { 8.738f, 23.596f, 13.342f };
			break;
	}
	vLocal_901 = { -326.5955f, 760.1794f, 117.5246f };
	vLocal_904 = { 0f, 0f, 7.166288f };
	vLocal_907 = { 2.126068f, 4.313558f, 2.5f };
}

bool func_436(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_437(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_603(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_603(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_277() == -1 && !func_645(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_645(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_603(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_646(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_647(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_648(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

Vector3 func_438(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_439(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_476(iParam0, vVar0, fParam2);
}

int func_440(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_649();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		Global_1955500[iVar0 /*16*/].f_1 = iParam1;
		Global_1955500[iVar0 /*16*/].f_2 = iParam0;
		Global_1955500[iVar0 /*16*/] = 0;
		Global_1955500[iVar0 /*16*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_3(iParam2, 128))
		{
			PED::_0x7C00CFC48A782DC0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_37(Global_1955500[iVar0 /*16*/], 0))
		{
			func_260(iVar0, 1024);
			func_260(iVar0, 16);
			func_260(iVar0, 256);
		}
		func_260(iVar0, iParam2);
	}
	return iVar0;
}

bool func_441(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_442(var uParam0)
{
	if (func_441(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_650(uParam0) || func_441(&(uParam0->f_3), 4)) && !func_441(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_BEHIND"), false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (func_651(uParam0))
	{
		func_444();
	}
	if (!func_441(&(uParam0->f_3), 16))
	{
		if (func_155(uParam0))
		{
			if (func_652(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

bool func_443(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (func_653(iParam0, fParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

void func_444()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_45();
}

bool func_445(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_654(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_441(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return false;
	}
	fVar0 = func_49(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_655(vParam0, uParam3))
	{
		return false;
	}
	if (!func_441(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_656(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_446(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = func_657(vParam1, 1);
	if (!func_441(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432 /* Float: -1f */);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432 /* Float: -1f */);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_209(uParam0);
	func_502(&(uParam0->f_3), 1);
}

Vector3 func_447(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = func_658(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_194(vVar0))
	{
	}
	return vVar0;
}

int func_448(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_208(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

bool func_449(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_450(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_451()
{
	UIFEED::_0xDD1232B332CBB9E7(4, 1, 0);
}

void func_452(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

bool func_453(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

int func_454(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_659(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_660(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_455(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_416(iParam0);
	func_456(iParam0, 18, 0, 1);
	func_456(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

void func_456(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_416(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_457(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_416(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_458(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_459(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_661(iParam0, uParam1, 1);
	func_662(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_460(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

float func_461(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_265(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_462(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (func_461(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_463(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_663(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_664(uParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_665(uParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*fParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_157();
		}
		else if ((func_157() - *iParam5) > bParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*fParam6 = 1;
	}
	return false;
}

void func_464(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_465(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_416(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945938[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(Global_1945938[iVar0 /*18*/].f_3, fParam1);
}

int func_466(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_659(iVar0, 2))
		{
			if (iParam2 == Global_1945938[iVar0 /*18*/].f_10 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_660(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_467(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_194(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_659(iVar0, 2))
		{
			if (func_569(vParam2, Global_1945938[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_660(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_468(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_416(iParam0);
	func_585(iVar0, bParam1);
}

bool func_469(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	return !func_659(iParam0, 4);
}

bool func_470(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_416(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_471(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_416(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_472(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_666(iParam0);
	if (bParam3)
	{
		func_667(iParam0, sParam1, iParam2);
	}
}

void func_473(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_171(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

bool func_474(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_475(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(iVar0, true, false);
	TASK::TASK_STAND_STILL(iVar0, -1);
}

int func_476(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_668(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_669(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_477(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_478(var uParam0, int iParam1)
{
	if (func_167(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (func_3(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_474(uParam0->f_1) && !func_32(uParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !func_32(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_479(var uParam0, int iParam1)
{
	var uVar0;

	if (func_167(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_3(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_670(&uVar0))
	{
		return true;
	}
	return false;
}

int func_480()
{
	int iVar0;

	if (!func_671())
	{
		return 0;
	}
	if (!func_672(&iVar0))
	{
		return 0;
	}
	if (!func_673(iVar0))
	{
		return 0;
	}
	return func_674(iVar0, 0);
}

bool func_481(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_167(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (func_3(uParam0->f_23, 4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (func_3(uParam0->f_23, 512) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return true;
	}
	return false;
}

int func_482(int iParam0)
{
	int iVar0;

	iVar0 = func_675(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::_IS_PED_HOGTIED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_483(var uParam0, int iParam1)
{
	if (func_167(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (func_3(uParam0->f_23, 4096) && func_32(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_3(uParam0->f_23, 256))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

bool func_484(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_676(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_676(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_485(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

int func_486(float fParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *fParam0 };
	if (func_677(&uParam1))
	{
		return 1;
	}
	if (!func_509(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*fParam0 = { vVar0 };
	return 1;
}

bool func_487(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_488(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_678(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_489(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_490(var uParam0)
{
	return func_37(*uParam0, 4);
}

bool func_491(var uParam0)
{
	return func_37(*uParam0, 64);
}

bool func_492(var uParam0)
{
	return func_37(*uParam0, 8);
}

void func_493(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_494(var uParam0)
{
	return func_37(*uParam0, 128);
}

bool func_495(var uParam0)
{
	return func_37(*uParam0, 2048);
}

void func_496(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_497(var uParam0)
{
	return func_37(*uParam0, 1024);
}

bool func_498(var uParam0)
{
	return func_37(*uParam0, 256);
}

void func_499(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_500(var uParam0)
{
	return func_37(*uParam0, 512);
}

bool func_501(var uParam0)
{
	return func_37(*uParam0, 4096);
}

void func_502(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_503(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_539(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_504(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_679())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_539(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_680(iVar0);
			func_681(iVar0, 0, 0);
		}
		func_539(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_537(func_536(joaat("CAREER_CASH")), iVar1);
	}
}

int func_505(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_506(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_631(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_507(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_211(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_682(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_508(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_155(uParam0))
	{
		func_153(uParam0, fParam1);
	}
}

bool func_509(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_683(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_510(var uParam0, int iParam1)
{
	PED::_0x6569F31A01B4C097(uParam0, 1, iParam1);
	PED::_0x6569F31A01B4C097(uParam0, 0, iParam1);
	PED::_0x6569F31A01B4C097(uParam0, 4, iParam1);
}

bool func_511(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_684(iParam0);
		return func_685(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_512()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1475))
	{
		iLocal_1475 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35), 1f, 0.7f, 3f);
		PED::_0x7C00CFC48A782DC0(iLocal_1475, Global_35, 0f, -0.25f, 0f, 0f, 0f, 0f, 2, 1);
		PED::_0x19C975B81BE53C28(iLocal_1475, Global_35);
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1475, 7);
	}
}

void func_513()
{
	func_69(115, 6, 0);
	func_69(115, 1, 1);
	func_686(115, 2097152);
}

void func_514(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_515()
{
	func_69(115, 2, 1);
}

int func_516(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

bool func_517(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

Vector3 func_518(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_438((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_519(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_520(int iParam0, int iParam1)
{
	if (!func_519(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] && iParam1) != 0;
}

int func_521(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

char* func_522(char* sParam0)
{
	return sParam0;
}

bool func_523(int iParam0, int iParam1)
{
	if (!func_418(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1) != 0;
}

void func_524(int iParam0, int iParam1)
{
	if (!func_418(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 || iParam1);
}

void func_525(int iParam0, int iParam1)
{
	if (!func_418(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 - (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1));
}

bool func_526(int iParam0)
{
	if (func_687())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_527()
{
	int iVar0;

	iVar0 = func_688();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_528(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_277() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_302(MISC::ABSF(fVar1) < 1f, func_302(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_529(int iParam0)
{
	if (!func_689(iParam0))
	{
		return false;
	}
	return func_690(iParam0);
}

int func_530(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_532()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_533(int iParam0, bool bParam1, int iParam2)
{
	func_691((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_692(iParam0);
}

void func_534(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_693(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_535(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_694(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_695(iVar5, &iVar2, &iVar0))
			{
				if (!func_696(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_697(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_698(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_527() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_527() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_699();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_536(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_537(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_538(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_539(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_700(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_540(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_701(iParam0))
	{
		return 0;
	}
	if (!func_702())
	{
		return 0;
	}
	if (!func_703(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_541(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (Global_1888801[iVar2 /*35*/].f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899.f_2))
			{
				if (!bParam1 || func_704(iVar2))
				{
					vVar3 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iVar2 /*35*/].f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

bool func_543(int iParam0)
{
	return iParam0 != 0;
}

int func_544(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_545(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			Global_36581[iVar0 /*2*/].f_1 = 3;
		}
		iVar0++;
	}
}

void func_546(var uParam0)
{
	if (uParam0->f_170)
	{
		func_705();
	}
}

bool func_547(var uParam0)
{
	if (func_706(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_707(uParam0->f_3);
		func_346(uParam0, 0, 1);
		func_708(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_709(0, 0);
		return true;
	}
	return false;
}

bool func_548(int iParam0)
{
	if (!func_289(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_549(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_61(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_550()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_551(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_277() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_552(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_553(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_556(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 24:
					*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 25:
					*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 31:
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 32:
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 33:
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_557(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_194(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_558(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_BLIP_ADD_FOR_COORD(-1702907713, *uParam0);
		MAP::_BLIP_SET_MODIFIER(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			func_52("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_559(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_560(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_194(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_367(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_710(iVar0, bParam8);
	return iVar0;
}

void func_561(int iParam0)
{
	if (!func_289(iParam0))
	{
		return;
	}
	func_711(iParam0);
}

void func_562(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_563(int iParam0)
{
	if (func_116(iParam0, 2))
	{
		return 200;
	}
	if (func_116(iParam0, 4))
	{
		return 70;
	}
	if (func_116(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_564(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_96(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_162() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_96(iParam0, 2);
		bVar1 = func_96(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_351())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_565(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_116(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_566(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_116(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_116(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_567(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_555(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_568(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_194(vParam1))
	{
		return false;
	}
	if (func_573(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_264(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_569(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_570(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_302(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_576(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_143();
			iParam4->f_2 = func_49(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_576(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_143();
		iParam4->f_2 = func_49(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_571(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_143() - *uParam0) >= iParam1;
	}
	return false;
}

int func_572(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_194(uParam0->f_12[iVar0 /*3*/]))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar1 /*3*/]) < BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_573(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_96(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_712(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_96(iParam0, 33554432))
	{
		if (func_713(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_574(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_116(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_96(iParam0, 1) && !func_96(iParam0, 2))
	{
		if (func_96(iParam0, 4096) || func_96(iParam0, 2048))
		{
			if (func_714(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_575(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_715())
	{
		return false;
	}
	return true;
}

bool func_576(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_716(vVar0, vParam0) > func_716(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_577(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_578(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return Global_36581[Global_36602 /*2*/].f_1;
		}
		iVar0++;
	}
	return 3;
}

Vector3 func_579(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, bParam3, vParam4);
}

float func_580(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_676((fParam0 + fParam1));
}

bool func_581(int iParam0, int iParam1)
{
	if (func_717(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("G_M_M_UNISWAMP_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return true;
		case joaat("G_M_M_UNICRIMINALS_02"):
		case joaat("G_M_M_UNICRIMINALS_01"):
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_582(var uParam0)
{
	return func_37(*uParam0, 32);
}

int func_583(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_584(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_585(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_659(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_586(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_587(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

int func_588(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_285(1);
	}
	else
	{
		iVar0 = func_542(iParam0);
	}
	return iVar0;
}

void func_589(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_718(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_719(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

void func_590(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_116(iParam0, 8192))
	{
		iVar0 = func_719(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_591(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_259(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_592(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_96(iParam0, 262144))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_720(262144, iVar0, 0, 1);
		}
	}
	if (func_96(iParam0, 128))
	{
		func_720(128, iVar0, 0, 1);
	}
	else if (func_96(iParam0, 524288))
	{
		func_720(524288, iVar0, 0, 1);
	}
	else if (func_96(iParam0, 536870912))
	{
		func_720(536870912, iVar0, 0, 1);
	}
	else if (func_96(iParam0, 4194304))
	{
		func_720(4194304, iVar0, 0, 1);
	}
	else if (func_96(iParam0, 8388608))
	{
		func_720(8388608, iVar0, 0, 1);
	}
}

void func_593(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_594(bool bParam0)
{
	if (!bParam0 && func_721(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_595()
{
	return Global_1310750.f_16037;
}

bool func_596(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_597(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_289(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_722(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_598(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_723(&Global_1393447, 1);
	func_724();
	func_725();
	func_726((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_143() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		func_727();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_720(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_720(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_720(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_728(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_729(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_729((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_599(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_600(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 = (Global_1392050[iParam1 /*14*/].f_1 - (Global_1392050[iParam1 /*14*/].f_1 && iParam0));
}

void func_601(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("GANG_BANDITOS");
		case 2:
			return joaat("GANG_EXCONFED");
		case 1:
			return joaat("GANG_INBRED");
		case 0:
			return joaat("GANG_ODRISCOLL");
		case 4:
			return joaat("GANG_RANCHERS");
		case 3:
			return joaat("GANG_SAVAGES");
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_603(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_604()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_605(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_606(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_605(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_157() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_607(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_608(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("HIGHPRESSURE"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_609(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_610(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_611(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_612(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_613(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_614(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SANDSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_615(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*iParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::_IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*iParam2 = Global_1935630.f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_616()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_524298)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (Global_1051043 == -1 && Global_1572887.f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_617(int iParam0)
{
	if (!func_620(iParam0))
	{
		return -1;
	}
	return func_731(func_730(iParam0));
}

bool func_618(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_619(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_620(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_621(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_622(int iParam0)
{
	return func_96(iParam0, Global_1310750.f_16072 | 64);
}

int func_623(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_624(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

bool func_625(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_626(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

bool func_627()
{
	if (func_732())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1955569.f_992[2];
	}
	return false;
}

void func_628(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_629(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_630(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_60(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_59(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_631(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_632(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_633(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_634(int iParam0, bool bParam1)
{
	switch (func_733(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_635(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_636(int iParam0)
{
	return func_659(iParam0, 2);
}

void func_637(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_638(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_637(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_302(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_209(&(iParam1->f_13));
		}
		if (func_734(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_735(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_638(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_458(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_736(*uParam0, 1, 1);
						}
					}
					else if (func_737(iParam1, 22))
					{
						func_736(*uParam0, 0, 1);
					}
				}
				if (func_738(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_739(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_740(iParam8);
					if (func_741(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_742(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_743(iParam1, uParam3, fVar8);
					if (func_744(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_662(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_745(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_738(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_746(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_741(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_739(uParam0, func_738(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_740(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_662(uParam3, 0, 0, 1, 1);
					}
					func_747(iParam1, 1);
				}
				func_743(iParam1, uParam3, fVar8);
				if (func_745(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_459(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_639(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_748(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_36(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_640(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_277() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_641(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_749(iParam0, &iVar0, &iVar1);
	if (!func_750(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_751(iVar0, iVar1);
}

int func_642(int iParam0)
{
	if (!func_271(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_643(int iParam0)
{
	return iParam0 != 0;
}

bool func_644(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_634(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_645(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_646(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_752(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_753((386 + iVar28), 1);
			if (func_754(iParam0, &Var0, iVar5, 0))
			{
				if (func_755(iParam0, &Var6, iVar5))
				{
					Var29 = { func_756(iParam0, Var0, iVar5, 0) };
					func_757(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_758(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_759(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_760(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_647(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_648(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_649()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_200(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_650(var uParam0)
{
	if (!func_761(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_651(var uParam0)
{
	if (!func_650(uParam0))
	{
		return false;
	}
	if (func_762(uParam0->f_7, uParam0->f_8, func_441(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_441(&(uParam0->f_3), 4))
	{
		if (func_763())
		{
			return true;
		}
	}
	return false;
}

int func_652(var uParam0)
{
	if (!func_155(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_156(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_143() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_653(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return true;
		}
	}
	if (func_764(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_654(float fParam0, float fParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam0;
	}
	return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam1;
}

bool func_655(vector3 vParam0, var uParam3)
{
	if (!func_441(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_631(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_656(vector3 vParam0, var uParam3)
{
	float fVar0;

	fVar0 = func_657(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_657(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_518(0) };
	vVar3 = { func_438(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

float func_658(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_659(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_660(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = iParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	func_585(iParam0, 1);
	func_586(iParam0, 1);
	func_587(iParam0, 128);
}

void func_661(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_175(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_43(iParam0, 0);
		}
	}
}

void func_662(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_174((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_175(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

float func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return 30f;
		case 2:
			return 80f;
		default:
			break;
	}
	return -1f;
}

int func_664(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { func_447(iParam1) };
	vVar3 = { func_447(iParam2) };
	return func_448(uParam0, vVar0, vVar3, iParam2);
}

int func_665(var uParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_447(iParam1) };
	return func_448(uParam0, vVar0, vParam2, 0);
}

void func_666(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_216(1) < iParam0)
	{
		iParam0 = func_216(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_536(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_667(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_539(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

float func_668(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_669(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_670(int iParam0)
{
	if (-1829635046 == func_765(81053684))
	{
		if (func_672(iParam0))
		{
			return true;
		}
	}
	else if (func_766(-525676072, iParam0))
	{
		if (func_672(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_671()
{
	return Global_1946804.f_2792;
}

bool func_672(int iParam0)
{
	if (func_766(81053684, iParam0))
	{
		return true;
	}
	if (func_766(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_673(int iParam0)
{
	if (func_767())
	{
		return false;
	}
	if (!func_696(iParam0, 0))
	{
		return false;
	}
	if (!func_768(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_674(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_769(iParam0);
	if (func_770(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_670(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_771();
			}
			else
			{
				iVar0 = func_772();
			}
		}
		else if (func_37(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_773();
		}
		else
		{
			iVar0 = func_774();
		}
	}
	else if (func_672(&iVar2))
	{
		if (func_770(iVar2, -1303648999))
		{
			iVar0 = func_771();
		}
		else
		{
			iVar0 = func_772();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_773();
	}
	else
	{
		iVar0 = func_774();
	}
	if (iVar0 != 0)
	{
		Global_1946804.f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

int func_675(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

float func_676(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

bool func_677(var uParam0)
{
	return func_37(*uParam0, 1);
}

void func_678(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_775(iParam1))
		{
			func_776(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_777(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_778(iParam0, 0);
			bVar0 = true;
		}
		func_779(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_679()
{
	if (func_780())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_680(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_781((Global_40.f_4283.f_325 + iParam0));
}

void func_681(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_679())
	{
		func_539(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_539(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_682(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_683(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_684(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_685(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_686(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_718(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_719(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

bool func_687()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

int func_688()
{
	return Global_40.f_11095.f_35;
}

bool func_689(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_690(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_691(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		func_782(bParam1);
	}
}

void func_692(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_693(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_694(int iParam0)
{
	vector3 vVar0;

	if (!func_783(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_695(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_783(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

bool func_696(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_697(int iParam0)
{
	return iParam0;
}

int func_698(int iParam0)
{
	vector3 vVar0;

	if (!func_696(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_699()
{
	int iVar0;

	iVar0 = func_527();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

void func_700(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_701(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_702()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_703(int iParam0, int iParam1, int iParam2)
{
	if (!func_701(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

bool func_704(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40615[iParam0 /*11*/] & 32 != 0;
}

void func_705()
{
	func_784(23);
}

int func_706(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_707(int iParam0)
{
	int iVar0;

	iVar0 = func_785(iParam0);
	if (iVar0 != 0)
	{
		func_786(-1, 24, 0, iVar0);
	}
}

void func_708(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_537(func_536(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_96(iParam0, 2))
	{
		func_686(iParam0, func_588(iParam3));
	}
	if (func_96(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_162();
		}
		func_787(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_116(iParam0, 65536))
	{
		func_788(iParam0, iParam1);
		func_789(iParam0, func_316(iParam0, iParam1));
		func_290(128);
	}
	func_591(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_592(iParam0, 1);
	if (!bParam2)
	{
		func_290(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_790(524288);
	}
	if (func_791(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_791(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_709(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_792(&Global_0, 8);
	}
	if (!func_702() || func_277() != -1)
	{
		return;
	}
	func_792(&Global_0, 1);
}

int func_710(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			Global_1911670[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_711(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_712(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_194(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_713(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_194(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_714(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_194(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_265(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_715()
{
	int iVar0;
	int iVar1;

	iVar0 = func_793(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_362(func_2());
		if (func_364(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_794(func_285(0)))
	{
		return false;
	}
	if (func_795())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_716(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			return 0;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			return 2;
		case joaat("G_M_M_UNIINBRED_01"):
			return 1;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			return 3;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			return 4;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			return 5;
	}
	return -1;
}

int func_718(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_719(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1326862.f_512[iParam1];
	iVar1 = Global_1326862.f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == Global_1326862.f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_720(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_559(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_548(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_796(iVar0) < func_797(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_591(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_798(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_722(int iParam0)
{
	int iVar0;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
	{
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;
	}
	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_723(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_724()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_799(iVar0, 128))
		{
			func_800(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_725()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_799(iVar0, 128) && func_799(iVar0, 1))
		{
			func_800(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_726(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_727()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_96(iVar0, 16777216))
		{
			if (!func_801(iVar0))
			{
				func_802(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_728(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_259(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_259(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_259(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_259(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_259(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_259(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_259(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_729(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_157();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

int func_730(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/];
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return Global_1058888.f_498[iParam0 /*2*/];
}

int func_731(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_732()
{
	switch (Global_1935630.f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return true;
		default:
			break;
	}
	return false;
}

int func_733(int iParam0)
{
	if (!func_620(iParam0))
	{
		return -1;
	}
	return func_803(iParam0);
}

bool func_734(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_804(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_662(uParam2, 0, 0, 1, 0);
				func_59(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_805(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_60(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_735(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_3(iParam4, 32);
		func_661(iParam1, uParam2, 0);
		iVar5 = func_806(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_662(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_737(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_737(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_807(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_808(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_809(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_737(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_736(*uParam0, 1, 1);
			}
			else
			{
				func_736(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_736(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_737(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_738(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_810(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_739(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_811(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_740(int iParam0)
{
	if (func_3(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_3(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_3(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_741(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_216(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || func_812(Global_35)) || func_813(Global_35)) || func_814(Global_35));
	fVar12 = -1f;
	if (func_155(&(iParam1->f_13)))
	{
		fVar12 = func_222(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_174((uParam4[iVar0 /*17*/])->f_6);
		func_815(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_816(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_817(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_662(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_254(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_661(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_818(iParam1, fParam6, iParam1->f_9))
					{
						func_209(&(iParam1->f_18));
						if (bVar6)
						{
							func_254(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_819(iParam1, fParam2);
	}
	return bVar5;
}

void func_742(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_743(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_453(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_819(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_744(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_820(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_821(iParam1, 0);
				func_661(iParam1, uParam2, func_737(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_745(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_209(&(iParam1->f_18));
			return false;
		}
		else if (func_155(&(iParam1->f_18)))
		{
			func_171(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_155(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_167(&(iParam1->f_18), fParam2);
	return true;
}

void func_746(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_815(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_747(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_748(int* iParam0)
{
	if (func_737(iParam0, 0))
	{
		if (func_822(iParam0))
		{
			func_747(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_749(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_750(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_823(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_824(iParam0))
	{
		return false;
	}
	if (func_825(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_826(iParam0, 1)) || func_827(32768))
	{
		if (!func_826(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_828())
	{
		return false;
	}
	return true;
}

void func_751(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

struct<5> func_752(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_829(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_698(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_756(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_830(bParam1) };
			if (bParam2 && func_831(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_754(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_754(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_755(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { func_832(bParam1) };
			switch (func_833(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (func_834(iParam0, -1823706425))
			{
				Var0 = { func_756(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_834(iParam0, -1483207246))
			{
				Var0 = { func_756(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_835(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_753(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
			return joaat("SLOTID_HORSE_SKIRT");
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 268:
			return joaat("SLOTID_HORSE_TAIL");
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return joaat("SLOTID_PROGRESSION");
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685 /* GXTEntry: "Right" */;
		case 387:
			return -649335959 /* GXTEntry: "Left" */;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_754(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_836(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_755(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_837(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_756(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_696(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_838(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_757(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_839(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_835(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_758(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_838(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_758(bool bParam0)
{
	if (func_277() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_838(bParam0));
}

int func_759(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_840(iParam0))
	{
		return 0;
	}
	if (!func_758(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_760(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_841(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_761(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_155(&uParam0))
	{
		return false;
	}
	if (func_652(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_762(float fParam0, float fParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	func_842(&uVar0, &uVar1, &iVar2, &iVar3, joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_654(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_763()
{
	if (((((((((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_ACCELERATE"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_CAR_ACCELERATE"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_SPRINT"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_ATTACK"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_BLOCK"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_RELOAD"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ENTER"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_DYNAMIC_SCENARIO"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
	{
		return true;
	}
	return false;
}

bool func_764(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;

	fVar0 = func_49(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && bParam5)
	{
		return true;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return true;
	}
	return false;
}

int func_765(int iParam0)
{
	int iVar0;

	iVar0 = func_844(func_843(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_766(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_844(func_843(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_833(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_767()
{
	if (Global_1946804.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804.f_2791)) < 1250)
	{
		return true;
	}
	if (func_845())
	{
		return true;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return true;
	}
	return false;
}

bool func_768(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_696(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_698(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_846(iParam0, 1))
		{
			return false;
		}
	}
	return func_847(iParam0, 0, bParam2) >= iParam1;
}

int func_769(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_672(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_770(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_771()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_848())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_772()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_848())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_773()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_848())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_774()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_848())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_775(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return true;
		default:
			break;
	}
	return false;
}

void func_776(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_849(iParam0, iParam1))
		{
			if (func_850(iParam0, iParam1))
			{
				if (func_851(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_852(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_777(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_778(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_779(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

bool func_780()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_781(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_536(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_782(bool bParam0)
{
	func_853(bParam0);
	Global_1955569.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

bool func_783(int iParam0, var uParam1)
{
	if (!func_854(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

void func_784(int iParam0)
{
	int iVar0;

	if (func_277() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_122(func_855(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_855(iVar0), func_550(), 1))
			{
				func_856(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_785(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_786(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_857() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_857();
					}
					func_858(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_60(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_787(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_116(iParam0, 8192))
	{
		iVar0 = func_719(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_788(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_555(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_789(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_96(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_194(vParam1))
	{
		return;
	}
	if (!func_289(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] };
		if (func_194(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_569(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_17504.f_2084[iVar1 /*5*/] = { vParam1 };
		Global_17504.f_2084[iVar1 /*5*/].f_3 = iParam0;
		Global_17504.f_2084[iVar1 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				Global_17504.f_2084[iVar0 /*5*/] = { vParam1 };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = iParam0;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
			}
			else
			{
				Global_17504.f_2084[iVar0 /*5*/] = { Global_17504.f_2084[iVar0 + 1 /*5*/] };
			}
			iVar0++;
		}
	}
}

void func_790(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_802(iVar0, iParam0);
		iVar0++;
	}
}

int func_791(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_792(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_793(int iParam0)
{
	if (!func_625(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_794(int iParam0)
{
	return (Global_1310750.f_16074 && iParam0) != 0;
}

bool func_795()
{
	return Global_1894899 & 2 != 0;
}

int func_796(int iParam0)
{
	if (func_289(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_797(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_798(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_799(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

void func_800(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

bool func_801(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_802(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

int func_803(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_859(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_804(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::_IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_860((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_805(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_453(uParam0[iVar0 /*17*/]))
		{
			func_109(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_806(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_218(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_174((uParam2[iVar0 /*17*/])->f_6))
		{
			func_109(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_807(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_544(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_808(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_809(int* iParam0, int* iParam1)
{
	if (!func_737(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_109(iParam1, 19);
			func_821(iParam0, 23);
			func_861(iParam1, 2);
		}
	}
}

bool func_810(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_862(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_863(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_811(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_218(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_812(int iParam0)
{
	return (func_864(iParam0, 4) || func_864(iParam0, 5));
}

int func_813(int iParam0)
{
	return func_864(iParam0, 7);
}

int func_814(int iParam0)
{
	return func_864(iParam0, 6);
}

void func_815(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_453(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_218(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_816(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_865(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_469(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_338(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_338(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_455(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_817(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_471(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_866(iParam1, 1))
	{
		func_867(iParam1, 1);
		return true;
	}
	return false;
}

bool func_818(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_819(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_820(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_821(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_822(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_823(int iParam0, int iParam1)
{
	if (func_277() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_824(int iParam0)
{
	if (func_277() != -1)
	{
		if (func_826(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_826(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_825(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_826(iParam0, 65536) && !func_826(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_826(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_826(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_826(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_827(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_828()
{
	return Global_1905944.f_5694;
}

struct<4> func_829(bool bParam0)
{
	return func_756(joaat("CHARACTER"), func_868(), -1591664384, bParam0);
}

struct<4> func_830(bool bParam0)
{
	int iVar0;

	iVar0 = func_838(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { func_756(923904168, func_829(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { func_756(923904168, func_829(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_756(923904168, func_829(bParam0), -740156546, 0);
}

bool func_831(int iParam0, bool bParam1)
{
	if (func_833(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_529(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_832(bool bParam0)
{
	int iVar0;

	iVar0 = func_838(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224219))
		{
			Global_1224219 = { func_756(271701509, func_829(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_756(271701509, func_829(bParam0), 12999093, 0);
}

int func_833(int iParam0)
{
	struct<2> Var0;

	if (!func_696(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_834(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_833(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_835(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_838(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_836(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_696(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_756(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_838(bParam6), &Var0, 0);
	return uVar4;
}

bool func_837(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_838(0);
	*uParam1 = { func_756(iParam0, func_830(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

int func_838(bool bParam0)
{
	if (func_277() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_839(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_840(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_841(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_842(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*iParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*iParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

int func_843(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_869(iVar0);
}

int func_844(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_845()
{
	int iVar0;

	iVar0 = Global_1946804.f_529[9];
	iVar0 = (iVar0 + Global_1946804.f_529[4]);
	iVar0 = (iVar0 + Global_1946804.f_529[10]);
	iVar0 = (iVar0 + Global_1946804.f_529[1]);
	iVar0 = (iVar0 + Global_1946804.f_529[2]);
	iVar0 = (iVar0 + Global_1946804.f_529[6]);
	iVar0 = (iVar0 + Global_1946804.f_529[29]);
	iVar0 = (iVar0 + Global_1946804.f_529[26]);
	iVar0 = (iVar0 + Global_1946804.f_529[18]);
	iVar0 = (iVar0 + Global_1946804.f_529[19]);
	return iVar0 > 0;
}

bool func_846(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_696(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_870(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_871("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_872(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_603(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_873(iVar1);
				return true;
			}
			iVar3++;
		}
		func_873(iVar1);
	}
	return false;
}

int func_847(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_696(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_698(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_870(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_874(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_838(bParam2), iParam0, 0);
	return uVar2;
}

int func_848()
{
	int iVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_517(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_517(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_849(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_850(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_851(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_849(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_852(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_853(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_854(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_855(int iParam0)
{
	if (!func_875(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_856(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_876(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_857()
{
	return Global_1899515;
}

void func_858(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_877(*uParam0);
	iVar1 = func_878(*uParam0);
	iVar2 = func_879(*uParam0);
	iVar3 = func_607(*uParam0);
	iVar4 = func_880(*uParam0);
	iVar5 = func_881(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_882(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_882(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_883(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_859(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_860(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_861(int* iParam0, int iParam1)
{
	if (!func_172(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_109(iParam0, 14);
		}
	}
}

bool func_862(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_863(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_864(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_865(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_866(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_416(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_867(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_416(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

struct<4> func_868()
{
	struct<4> Var0;

	return Var0;
}

int func_869(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_884(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_870(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_696(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_698(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_770(iParam0, 1399091007))
	{
		func_885(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_871(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_838(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_872(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

int func_873(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_874(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_886(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_887(&Var0, func_830(0));
	}
	if (!func_888(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_873(iVar14);
	return uVar15;
}

bool func_875(int iParam0)
{
	return iParam0 > -1;
}

bool func_876(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_877(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_413(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_878(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_879(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_880(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_881(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_882(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_883(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_889(uParam0, iParam6);
	func_890(uParam0, iParam5);
	func_891(uParam0, iParam4);
	func_892(uParam0, iParam3);
	func_893(uParam0, iParam2);
	func_894(uParam0, iParam1);
}

int func_884(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_885(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_886(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_887(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_888(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_838(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_889(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_890(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_891(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_878(*uParam0);
	iVar1 = func_877(*uParam0);
	if (iParam1 < 1 || iParam1 > func_882(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_892(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_893(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_894(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

