// --- Teleportador VIP
prontera,151,184,5	script	Sala VIP	899,{

waitingroom "Sala VIP",0;

if (getgmlevel() < 10){
if (getgmlevel() < 1){
show "[Sala VIP]";
show "Bom dia";
close;
}

show "[Sala VIP]";
show "Ol� S"+strsex("r.","ra.")+" "+strcharinfo(0)+"";
show "Deseja entrar na sala VIP ?";
next;
switch(select("- Sala VIP Normal","- N�o, obrigad"+strsex("o","a")+"")){

Case 1:
show "[Sala VIP]";
show "At� logo !";
set vip,1;
close2;
warp "force_5-1",174,174;

Case 2:
show "[Sala VIP]";
show "Tenha um bom dia !";
close;
}
}

show "[Sala VIP]";
show "Ol� S"+strsex("r.","ra.")+" "+strcharinfo(0)+"";
show "Deseja entrar na sala VIP ?";
next;
switch(select("- Sala VIP Premium","- Sala VIP Normal","- N�o, obrigad"+strsex("o","a")+"")){

Case 1:
show "[Sala VIP]";
show "At� logo !";
set vip,1;
close2;
warp "force_5-1",100,100;
end;

Case 2:
show "[Sala VIP]";
show "At� logo !";
set vip,1;
close2;
warp "force_5-1",174,174;
end;

Case 3:
show "[Sala VIP]";
show "Tenha um bom dia !";
close;
}
}

// --- Torpedo !

force_5-1,169,180,5	script	Torpedo	888,{

if (getgmlevel() < 1) {
show "[Torpedo]";
show "Voc� n�o � vip saia desta sala !";
close2;
warp "prontera",150,150;
end;
}

show "[Torpedo]";
show "Ol� S"+strsex("r.","ra.")+" "+strcharinfo(0)+"";
show "Deseja mandar um mensagem para todo o server ?";
next;
switch(select("- Claro !","- Talvez mais tarde !")){

Case 1:
show "[Torpedo]";
show "Digite sua mensagem !";
digit $msg$;
announce "["+strcharinfo(0) +"]: "+$msg$,0;
close;

Case 2:
show "[Torpedo]";
show "Volte quando quiser mandar uma mensagem !";
close;
}
}

// --- Resetadora

force_5-1,175,180,5	script	Resetadora::3	838,{

if (getgmlevel() < 1) {
show "[Resetadora]";
show "Voc� n�o � vip saia desta sala !";
close2;
warp "prontera",150,150;
end;
}

show "[Resetadora]";
show "Ol� S"+strsex("r.","ra.")+" "+strcharinfo(0)+"";
show "O que deseja resetar hoje ?";
next;
switch(select("- Atributos","- Habilidades","- Ambos","- Nada, obrigado")){

Case 1:
show "[Resetadora]";
show "Prontinho !";
resetstatus;
close;

Case 2:
show "[Resetadora]";
show "Prontinho !";
resetskill;
close;

Case 3:
show "[Resetadora]";
show "Prontinho !";
resetskill;
resetstatus;
close;

Case 4:
show "[Resetadora]";
show "Volte quando precisar de mim !";
close;
}
}

// --- Buffs

force_5-1,171,180,4	script	Buffer	793,{

if (getgmlevel() < 1) {
show "[Buffer]";
show "Voc� n�o � vip tchau !";
close2;
warp "prontera",150,150;
end;
}

show "[Buffer]";
show "Buffado !";
percentheal 100,100; // --- CURA
sc_start 30, 240000, 10; // --- Ben��o
skilleffect 34,0; // --- Ben��o
sc_start 32, 240000, 10; // --- AGI
skilleffect 29,0; // --- AGI
// --- BUFFS abaixo est�o desabilitados tire as // para habilitar
sc_start 35, 60000, 5; 
skilleffect 66,0; 
sc_start SC_SUFFRAGIUM,360000,3;
skilleffect 67,0;
sc_start 41, 30000, 5;
skilleffect 75,0; 
sc_start 29, 300000, 10;
skilleffect 33,0;
sc_start 39, 120000, 10;
skilleffect 73,0;
sc_start 40, 90000, 5;
skilleffect 74,0;
close;
}


// --- Premium

// --- Torpedo !

force_5-1,102,107,6	script	Torpedo#2	888,{

if (getgmlevel() < 10) {
show "[Torpedo]";
show "Voc� n�o � vip saia desta sala !";
close2;
warp "prontera",150,150;
end;
}

show "[Torpedo]";
show "Ol� S"+strsex("r","ra")+" "+strcharinfo(0)+"";
show "Deseja mandar um mensagem para todo o server ?";
next;
switch(select("- Claro !","- Talvez mais tarde !")){

Case 1:
show "[Torpedo]";
show "Digite sua mensagem !";
digit $msg$;
announce "["+strcharinfo(0) +"]: "+$msg$,0;
close;

Case 2:
show "[Torpedo]";
show "Volte quando quiser mandar uma mensagem !";
close;
}
}

// --- Resetadora

force_5-1,96,107,5	script	Resetadora#2	838,{

if (getgmlevel() < 10) {
show "[Resetadora]";
show "Voc� n�o � vip n�o pode ficar aqui !";
close2;
warp "prontera",150,150;
end;
}

show "[Resetadora]";
show "Ol� S"+strsex("r","ra")+" "+strcharinfo(0)+"";
show "O que deseja resetar hoje ?";
next;
switch(select("- Atributos","- Habilidades","- Ambos","- Nada, obrigado")){

Case 1:
show "[Resetadora]";
show "Prontinho !";
resetstatus;
close;

Case 2:
show "[Resetadora]";
show "Prontinho !";
resetskill;
close;

Case 3:
show "[Resetadora]";
show "Prontinho !";
resetskill;
resetstatus;
close;

Case 4:
show "[Resetadora]";
show "Volte quando precisar de mim !";
close;
}
}

// --- Buffs

force_5-1,94,107,4	script	Buffer#2	793,{

if (getgmlevel() < 1) {
show "[Buffer]";
show "Voc� n�o � VIP tchau !";
close2;
warp "prontera",150,150;
end;
}

show "[Buffer]";
show "Buffado !";
percentheal 100,100; // --- CURA
sc_start 30, 240000, 10; // --- Ben��o
skilleffect 34,0; // --- Ben��o
sc_start 32, 240000, 10; // --- AGI
skilleffect 29,0; // --- AGI
// --- BUFFS abaixo est�o desabilitados tire as // para habilitar
sc_start 35, 60000, 5;
skilleffect 66,0; 
sc_start SC_SUFFRAGIUM,360000,3;
skilleffect 67,0;
sc_start 41, 30000, 5;
skilleffect 75,0; 
sc_start 29, 300000, 10;
skilleffect 33,0;
sc_start 39, 120000, 10;
skilleffect 73,0;
sc_start 40, 90000, 5;
skilleffect 74,0;
close;
}

// --- Kafra VIP NORMAL

force_5-1,173,180,5	script	Kafra Master#2	861,{

specialeffect2 14;
percentheal 100,100;
healhomun 100,100;
show "^0099FF[Kafra]^000000";
show "Ol� ^0099FF"+strcharinfo(0)+"^000000";
show "Eu estou aqui para";
show "ajuda-l"+strsex("o","a")+" do que ";
show "voc� precisa ?";
next;
switch(select("- Salvar","- Abrir Armaz�m","- Reparar Equipamentos","- Servi�o de Teletransporte","- Nada, obrigad"+strsex("o","a")+"")){

Case 1:
show "^0099FF[Kafra]^000000";
show "Prontinho !";
show "Seu ponto de";
show "retorno foi salvo";
savepoint "force_5-1",173,159;
close;

Case 2:
show "^0099FF[Kafra]^000000";
show "Prontinho !";
close2;
openstorage;
break;

Case 3:
show "^0099FF[Kafra]^000000";
show "Pronto !";
show "seus equipamentos";
show "foram concertados";
atcommand "@repairall";
specialeffect2 111;
close;

Case 4:
show "^0099FF[Kafra]^000000";
show "Aonde deseja ir ?";
next;
switch(select("- Desejo ir � uma Cidade","- Desejo ir � outros lugares")){

Case 1:	
show "^0099FF[Kafra]^000000";
show "Por favor selecione seu destino.";
next;
switch(select("- Prontera","- Alberta","- Al De Baran","- Amatsu","- Ayothaya","- Comodo","- Einbroch",
"- Einbech","- Geffen","- Juno","- Kunlun","- Izlude","- Louyang","- Lutie","- Morroc",
"- Niflheim","- Payon","- Umbala","- Lighthalzen","- Hugel","- Rachel","- Veins")){

		case 1: warp "prontera",156,187; end;
		case 2: warp "alberta",27,236; end;
		case 3: warp "aldebaran",145,120; end;
		case 4: warp "amatsu",197,86; end;
		case 5: warp "ayothaya",149,118; end;
		case 6: warp "comodo",188,161; end;
		case 7: warp "einbroch",64,200; end;
		case 8: warp "einbech",70,95; end;
		case 9: warp "geffen",119,66; end;
		case 10: warp "yuno",160,168; end;
		case 11: warp "gonryun",150,130; end;
		case 12: warp "izlude",128,111; end;
		case 13: warp "louyang",210,108; end;
		case 14: warp "xmas",148,131; end;
		case 15: warp "morocc",159,93; end;
		case 16: warp "niflheim",35,161; end;
		case 17: warp "payon",152,75; end;
		case 18: warp "umbala",130,130; end;
		case 19: warp "lighthalzen",158,92; end;
		case 20: warp "hugel",96,145; end;
		case 21: warp "rachel",130,110; end;
		case 22: warp "veins",216,123; end;
}

Case 2:
show "^0099FF[Kafra]^000000";
show "Por favor selecione seu destino.";
next;
switch(select("- Calabou�o de Einbech","- Calabou�o de Magma","- Caverna de Comodo",
"- Caverna de Payon","- Esfinge","- Esgoto de Prontera","- F�brica de Brinquedos","- Formigueiro Infernal",
"- Glast Heim","- Ilha Byalan","- Ilha das Tartarugas","- Labirinto de Tatames",
"- Mina de Carv�o","- Navio Fantasma","- Pir�mide","- Praia das Focas",
"- Poringl�ndia","- Vila dos Orcs","- O Lago do Abismo","- Calabou�o de Kunlun",
"- Desfiladeiro de El Mes","- Campos de Ayothaya")){

case 1: warp "einbech",135,249; end;
case 2: warp "yuno_fild03",36,140; end;
case 3: 
show "[^FF8000Teleportadora^000000]";
show "Caverna de Comodo? Poderia ser mais espec�fico?";
next;
switch(select("- Karu, a caverna do Oeste","- Ruande, a caverna do Norte","- Mao, a caverna do Leste")){
			case 1: warp "beach_dun",266,67; end;
			case 2:	warp "beach_dun2",154,25; end;
			case 3:	warp "beach_dun3",23,260; end;
}

			case 4: warp "pay_arche",43,132; end;
			case 5: warp "moc_fild19",107,100; end;
			case 6: warp "prt_sewb1",126,248; end;
			case 7: warp "xmas",144,310; end;
			case 8: warp "moc_fild20",164,145; end;
			case 9: warp "glast_01",368,303; end;
			case 10: warp "izlu2dun",106,88; end;
			case 11: warp "tur_dun01",149,238; end;
			case 12: warp "ama_dun01",229,12; end;
			case 13: warp "mjolnir_02",81,359; end;
			case 14: warp "alb2trea",75,98; end;
			case 15: warp "moc_ruins",62,162; end;
			case 16: warp "cmd_fild02",222,372; end;
			case 17: warp "pay_fild04",20,165; end;
			case 18: warp "gef_fild10",70,332; end;
			case 19: warp "hu_fild05",189,207; end;
			case 20: warp "gonryun",160,195; end;
			case 21: warp "yuno_fild07",218,176; end;
			case 22: warp "ayo_fild02",280,149; end;
}

Case 5:
show "^0099FF[Kafra]^000000";
show "Ok volte ";
show "quando precisar";
show "de alguma coisa";
close;
}
}
}
// --- Kafra Premium

force_5-1,98,107,5	script	Kafra Master#3	861,{

specialeffect2 14;
percentheal 100,100;
healhomun 100,100;
show "^0099FF[Kafra]^000000";
show "Ol� ^0099FF"+strcharinfo(0)+"^000000";
show "Eu estou aqui para";
show "ajuda-l"+strsex("o","a")+" do que ";
show "voc� precisa ?";
next;
switch(select("- Salvar","- Abrir Armaz�m","- Reparar Equipamentos","- Servi�o de Teletransporte","- Nada, obrigad"+strsex("o","a")+"")){

Case 1:
show "^0099FF[Kafra]^000000";
show "Prontinho !";
show "Seu ponto de";
show "retorno foi salvo";
savepoint "force_5-1",99,88;
close;

Case 2:
show "^0099FF[Kafra]^000000";
show "Prontinho !";
close2;
openstorage;
break;

Case 3:
show "^0099FF[Kafra]^000000";
show "Pronto !";
show "seus equipamentos";
show "foram concertados";
atcommand "@repairall";
specialeffect2 111;
close;

Case 4:
show "^0099FF[Kafra]^000000";
show "Aonde deseja ir ?";
next;
switch(select("- Desejo ir � uma Cidade","- Desejo ir � outros lugares")){

Case 1:	
show "^0099FF[Kafra]^000000";
show "Por favor selecione seu destino.";
next;
switch(select("- Prontera","- Alberta","- Al De Baran","- Amatsu","- Ayothaya","- Comodo","- Einbroch",
"- Einbech","- Geffen","- Juno","- Kunlun","- Izlude","- Louyang","- Lutie","- Morroc",
"- Niflheim","- Payon","- Umbala","- Lighthalzen","- Hugel","- Rachel","- Veins")){

		case 1: warp "prontera",156,187; end;
		case 2: warp "alberta",27,236; end;
		case 3: warp "aldebaran",145,120; end;
		case 4: warp "amatsu",197,86; end;
		case 5: warp "ayothaya",149,118; end;
		case 6: warp "comodo",188,161; end;
		case 7: warp "einbroch",64,200; end;
		case 8: warp "einbech",70,95; end;
		case 9: warp "geffen",119,66; end;
		case 10: warp "yuno",160,168; end;
		case 11: warp "gonryun",150,130; end;
		case 12: warp "izlude",128,111; end;
		case 13: warp "louyang",210,108; end;
		case 14: warp "xmas",148,131; end;
		case 15: warp "morocc",159,93; end;
		case 16: warp "niflheim",35,161; end;
		case 17: warp "payon",152,75; end;
		case 18: warp "umbala",130,130; end;
		case 19: warp "lighthalzen",158,92; end;
		case 20: warp "hugel",96,145; end;
		case 21: warp "rachel",130,110; end;
		case 22: warp "veins",216,123; end;
}

Case 2:
show "^0099FF[Kafra]^000000";
show "Por favor selecione seu destino.";
next;
switch(select("- Calabou�o de Einbech","- Calabou�o de Magma","- Caverna de Comodo",
"- Caverna de Payon","- Esfinge","- Esgoto de Prontera","- F�brica de Brinquedos","- Formigueiro Infernal",
"- Glast Heim","- Ilha Byalan","- Ilha das Tartarugas","- Labirinto de Tatames",
"- Mina de Carv�o","- Navio Fantasma","- Pir�mide","- Praia das Focas",
"- Poringl�ndia","- Vila dos Orcs","- O Lago do Abismo","- Calabou�o de Kunlun",
"- Desfiladeiro de El Mes","- Campos de Ayothaya")){

case 1: warp "einbech",135,249; end;
case 2: warp "yuno_fild03",36,140; end;
case 3: 
show "[^FF8000Teleportadora^000000]";
show "Caverna de Comodo? Poderia ser mais espec�fico?";
next;
switch(select("- Karu, a caverna do Oeste","- Ruande, a caverna do Norte","- Mao, a caverna do Leste")){
			case 1: warp "beach_dun",266,67; end;
			case 2:	warp "beach_dun2",154,25; end;
			case 3:	warp "beach_dun3",23,260; end;
}

			case 4: warp "pay_arche",43,132; end;
			case 5: warp "moc_fild19",107,100; end;
			case 6: warp "prt_sewb1",126,248; end;
			case 7: warp "xmas",144,310; end;
			case 8: warp "moc_fild20",164,145; end;
			case 9: warp "glast_01",368,303; end;
			case 10: warp "izlu2dun",106,88; end;
			case 11: warp "tur_dun01",149,238; end;
			case 12: warp "ama_dun01",229,12; end;
			case 13: warp "mjolnir_02",81,359; end;
			case 14: warp "alb2trea",75,98; end;
			case 15: warp "moc_ruins",62,162; end;
			case 16: warp "cmd_fild02",222,372; end;
			case 17: warp "pay_fild04",20,165; end;
			case 18: warp "gef_fild10",70,332; end;
			case 19: warp "hu_fild05",189,207; end;
			case 20: warp "gonryun",160,195; end;
			case 21: warp "yuno_fild07",218,176; end;
			case 22: warp "ayo_fild02",280,149; end;
}

Case 5:
show "^0099FF[Kafra]^000000";
show "Ok volte ";
show "quando precisar";
show "de alguma coisa";
close;
}
}
}

// --- Cirurgi�o Premium

force_5-1,100,107,5	script	Cirurgi�o Famoso	121,{

if (getgmlevel() < 10) {
show "[Cirurgi�o]";
show "Voc� n�o � VIP n�o pode fazer cirurgia !";
close2;
warp "prontera",150,150;
end;
}

show "[Cirurgi�o]";
show "Ol� ^C0C0C0"+strcharinfo(0)+"^000000, eu sou um Cirurgi�o muito famoso";
show "Eu trabalhava em um hospital h� muito tempo, mas eu fui demitido por fazer";
show "Uma experiencia com mudan�a de sexo que deu errada em um paciente";
show "Agora eu ja estou mais experiente e n�o cometo mais erros";
next;
show "[Cirurgi�o]";
show "Ent�o ^C0C0C0"+strcharinfo(0)+"^000000 voc� gostaria de mudar de sexo ?";
show "Se voc� escolher mudar de sexo suas habilidades ser�o resetadas !";
next;
switch(select("- Sim, eu desejo mudar de sexo !","- N�o, estou feliz assim !")){

case 1:
show "[Cirurgi�o]";
show "Muito bem eu irei come�ar a cirurgia agora, deite-se na cama de cirurgia por favor";
show "Hmm... Arrumando a cama, bisturi, agulha...";
show "Aplicando a nestesia...";
next;
show "^00FF00Algumas horas depois...^000000";
specialeffect2 673;
specialeffect2 673;
specialeffect2 673;
specialeffect2 673;
specialeffect2 673;
specialeffect2 673;
specialeffect2 673;
specialeffect2 673;
next;
show "[Cirurgi�o]";
show "A cirurgia foi um sucesso !";
show "Lave o rosto para conseguir enxergar melhor";
next;
resetskill;
changesex;
end;

case 2:
show "[Cirurgi�o]";
show "Muito bem se voc� mudar de ideia fale comigo !";
close;
}
}

// --- Porteiro MvP

force_5-1,104,107,5	script	Porteiro MvP	109,{

if (getgmlevel() <10) {
show "[Porteiro MvP]";
show "Voc� n�o � vip, v� embora !!";
close;
}

show "[Porteiro MvP]";
show "Ol� "+strcharinfo(0)+"";
show "Deseja ir a sala MvP ?";
next;
switch(select("- Sim, vamos logo !","- N�o, obrigado")){

case 1:
show "[Porteiro MvP]";
show "At� logo e boa sorte !";
close2;
warp "pvp_y_5-1",155,193;
end;

case 2:
show "[Porteiro MvP]";
show "Tudo bem at� logo ent�o !";
close;
}
}

-	script	Summonconfs	-1,{

OnInit:

//======== PRE�O ========
set $@zeny,0;
//=======================
end;

}

// --- Invocador MvP

pvp_y_5-1,155,193,5	script	Invocador	841,{

if (getgmlevel() <10) {
show "[Invocador]";
show "Ol�  ^00FF00"+strcharinfo(0)+"^000000 eu sou invocador !";
show "Eu s� trabalho para os playes vips, para adquirir vip";
show "acesse o site do nosso server www.seuserver.com.br";
close;
}

show "[Invocador]";
show "Ol�  ^00FF00"+strcharinfo(0)+"^000000 eu sou o invocador.";
show "Eu posso invocar um monstro por $@zeny zenys, voc� s� tem que me dar o ID";
show "do monstro que voc� deseja invocar, gostaria de invocar um monstro ?";
next;
switch(select("- Sim, por favor","- N�o, obrigado !")){

case 1:
if (Zeny < $@zeny) {
show "[Invocador]";
show "Voc� n�o tem a quantia certa de zenys";
close;
}

show "[Invocador]";
show "�timo, agora digite o ID do monstro que voc� deseja invocar !";
show "^00FF00ATEN��O !! se voc� me der o ID errado ir� perder a quantia de zenys^000000";
next;
digit $ID$;
next;
show "[Invocador]";
show "pronto !";
set zeny,zeny- $@zeny;
monster "pvp_y_5-1",155,183,"Monster",$ID$,1;
close;

case 2:
show "[Invocador]";
show "Ok, volte quando quiser invocar um monstro";
close;
}
}

force_5-1,92,107,5	script	Bruxa Suspeita	859,{

if (getgmlevel() < 10) {
show "[Bruxa]";
show "Infelizmente voc� n�o � VIP !";
close2;
warp "prontera",150,150;
end;
}

// --- Disguise

show "[Bruxa]";
show "L� estava eu contra todo o ex�rcito de RuneMidGard.";
show "Eles estavam todos me olhando com raiva e me falando";
show "para desistir e me entregar, mas eu estava confiante.";
next;
show "[Bruxa]";
show "Eu disse a eles que nunca iria desistir, ent�o...";
show "Eles avan�aram............";
show "Vieram em minha dire��o com suas armas e poderes.";
show "Mas eles n�o sabiam meu verdadeiro poder...";
show "De repente..........";
next;
show "[Bruxa]";
show "Eu transformei todos em fabres!!!";
show "Muahahahahahahahaha !!!!";
next;
show "[Bruxa]";
show "Hunh.... ?";
show "Espere, mas o que ?";
show "Voc� escutou tudo que eu disse ??";
next;
switch(select("- Voc� tem um poder especial ?","- N�o, estou indo embora")){

Case 1:
show "[Bruxa]";
show "Eu tenho sim idai ?? N�o � da sua conta.";
show "Voc�s VIP's acham que s�o melhores do que eu.";
show "At� parece !!";
next;
switch(select("- Voc� pode me transformar em alguem monstro ?","- Voc� � louca")){

Case 1:
show "[Bruxa]";
show "... ��";
show "Voc� n�o tem medo de mim !!!???";
show "..........";
next;
show "[Bruxa]";
show "Muito bem, se eu te transformar em um monstro voc� vai embora ?";
next;
switch(select("- Sim !","- A vai se danar !")){

case 1:
show "[Bruxa]";
show "OK, ent�o digite o ID do monstro que voc� quer virar !";
digit $ID$;
next;
show "[Bruxa]";
show "Pronto !";
show "agora saia daqui !!";
disguise $ID$;
close;

case 2:
close;
}

case 2:
show "[Bruxa]";
show "Sou louca e com muito orgulho !!";
close;
}

case 2:
show "[Bruxa]";
show "Muahahahahahaha !!";
close;
}
}