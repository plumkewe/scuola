// grazie a https://github.com/tomickigrzegorz e a chatgpt


// Configurazione della mappa

let config = {
  minZoom: 3,
  maxZoom: 18,
};
// Livello di ingrandimento con cui inizierà la mappa
const zoom = 15;
// Coordinate del centro della mappa
const lat = 42.9256;
const lng = 10.5259;

// Array di coordinate con testi dei popup per il gruppo A
const pointsA = [
  [42.922888,10.528097, "I am here"],
  [42.922403,10.527503, "I am here"],
  [42.922084,10.527263, "I am here"],
  [42.921515,10.527401, "I am here"],
  [42.921793,10.527221, "I am here"],
  [42.921811,10.527230, "I am here"],
  [42.922280,10.527390, "I am here"],
  [42.922862,10.527961, "I am here"],
  [42.927037,10.533008, "I am here"],
  [42.926745,10.532920, "I am here"],
  [42.926718,10.530245, "I am here"],
  [42.926397,10.529927, "I am here"],
  [42.924048,10.530060, "I am here"],
  [42.922106,10.532213, "I am here"],
  [42.924037,10.530888, "I am here"],
  [42.924100,10.530720, "I am here"],
  [42.924050,10.531952, "I am here"],
  [42.924057,10.532217, "I am here"],
  [42.924112,10.533225, "I am here"],
  [42.924710,10.530350, "I am here"],
  [42.924720,10.530260, "I am here"],
  [42.924720,10.530140, "I am here"],
  [42.924720,10.529920, "I am here"],
  [42.922830,10.528580, "I am here"],
  [42.924090,10.532830, "I am here"],
  [42.928240,10.526670, "I am here"],
  [42.927280,10.528490, "I am here"],
  [42.929170,10.525070, "I am here"],
  [42.926570,10.529070, "I am here"],
  [42.921800,10.531560, "I am here"],
  [42.921790,10.531810, "I am here"],
  [42.923820,10.529790, "I am here"],
  [42.925420,10.530740, "I am here"],
  [42.923890,10.532720, "I am here"],
  [42.925710,10.529880, "I am here"],
  [42.925230,10.530940, "I am here"],
  [42.924330,10.530950, "I am here"],
  [42.924670,10.532070, "I am here"],
  [42.922888,10.528097, "I am here"],
  [42.922403,10.527503, "I am here"],
];

// Array di coordinate con testi dei popup per il gruppo B
const pointsB = [
  [42.925461,10.522837, "Nuovo"],
  [42.925280,10.522550, "Nuovo"],
  [42.925377,10.521459, "Nuovo"],
  [42.925124,10.522326, "Nuovo"],
  [42.924919,10.522734, "Nuovo"],
  [42.923572,10.522450, "Nuovo"],
  [42.923603,10.522266, "Nuovo"],
  [42.923084,10.522250, "Nuovo"],
  [42.922704,10.523235, "Intero"],
  [42.922697,10.523534, "Intero"],
  [42.922985,10.523449, "Intero"],
  [42.922986,10.523113, "Nuovo"],
  [42.923490,10.523680, "Piccolo"],
  [42.923490,10.524350, "Piccolo"],
  [42.923994,10.525580, "Intero"],
  [42.924598,10.523531, "Piccolo"],
  [42.924433,10.525234, "Piccolo"],
  [42.925680,10.523120, "Piccolo"],
  [42.925680,10.522990, "Piccolo"],
  [42.923416,10.520983, "Nuovo"],
  [42.925396,10.521521, "Nuovo"],
  [42.925524,10.520883, "Nuovo"],
  [42.925528,10.520881, "Nuovo"],
  [42.926120,10.521050, "Mezzo"],
  [42.926370,10.521700, "Mezzo"],
  [42.926580,10.522080, "Mezzo"],
  [42.926650,10.522600, "Mezzo"],
  [42.926700,10.523190, "Mezzo"],
  [42.926800,10.523910, "Mezzo"],
  [42.926880,10.525050, "Mezzo"],
  [42.926904,10.525616, "Mezzo"],
  [42.926590,10.523800, "Mezzo"],
  [42.926520,10.523190, "Mezzo"],
  [42.926410,10.522290, "Mezzo"],
  [42.925631,10.521927, "Nuovo"],
  [42.925970,10.520450, "Piccolo"],
  [42.926290,10.520430, "Mezzo"],
  [42.926510,10.520250, "Mezzo"],
  [42.926860,10.520050, "Mezzo"],
  [42.926930,10.520130, "Mezzo"],
  [42.926795,10.520365, "Piccolo"],
  [42.926507,10.520603, "Piccolo"],
  [42.926271,10.520753, "Mezzo"],
  [42.926451,10.521317, "Mezzo"],
  [42.926725,10.521088, "Piccolo"],
  [42.927141,10.520731, "Mezzo"],
  [42.927106,10.520454, "Piccolo"],
  [42.927065,10.520215, "Mezzo"],
  [42.927223,10.520601, "Mezzo"],
  [42.927208,10.520973, "Mezzo"],
  [42.926850,10.521200, "Piccolo"],
  [42.926787,10.521450, "Mezzo"],
  [42.927337,10.521758, "Piccolo"],
  [42.927860,10.520352, "Piccolo"],
  [42.928690,10.520724, "Piccolo"],
  [42.927701,10.522851, "Piccolo"],
  [42.928257,10.524056, "Piccolo"],
  [42.928777,10.519633, "Piccolo"],
  [42.927105,10.518788, "Nuovo"],
  [42.926537,10.519287, "Nuovo"],
  [42.925737,10.519293, "Struttura-B"],
  [42.925820,10.519193, "Struttura-B"],
  [42.925960,10.518914, "Struttura-B"],
  [42.926211,10.519131, "Struttura-B"],
  [42.926198,10.519000, "Nuovo"],
  [42.926301,10.518938, "Nuovo"],
  [42.926195,10.518817, "Struttura-B"],
  [42.926561,10.518991, "Struttura-M"],
  [42.927281,10.518384, "Struttura-M"],
  [42.927760,10.518026, "Struttura-M"],
  [42.925441,10.521300, "Nuovo"],
  [42.925440,10.521327, "Nuovo"],
  [42.926348,10.520971, "Piccolo"],
  [42.926352,10.520744, "Piccolo"],
  [42.926559,10.520844, "Struttura-B"],
  [42.926598,10.520702, "Piccolo"],
  [42.926624,10.520622, "Struttura-B"],
  [42.926618,10.520539, "Piccolo"],
  [42.926786,10.520560, "Piccolo"],
  [42.926932,10.520431, "Piccolo"],
  [42.927021,10.520597, "Piccolo"],
  [42.926911,10.520690, "Piccolo"],
  [42.926801,10.520798, "Piccolo"],
  [42.926820,10.520930, "Piccolo"],
  [42.927508,10.523442, "Piccolo"],
  [42.927530,10.529990, "Piccolo"],
  [42.927150,10.529790, "Piccolo"],
  [42.926980,10.529680, "Piccolo"],
  [42.926770,10.529580, "Piccolo"],
  [42.927392,10.529173, "Piccolo"],
  [42.927407,10.529205, "Piccolo"],
  [42.926165,10.528468, "Intero"],
  [42.928720,10.527159, "Piccolo"],
  [42.926744,10.526548, "Intero"],
  [42.926080,10.528410, "Intero"],
  [42.926200,10.528010, "Intero"],
  [42.926330,10.527540, "Piccolo"],
  [42.926690,10.526330, "Intero"],
  [42.926862,10.525938, "Piccolo"],
  [42.926728,10.525808, "Piccolo"],
  [42.926010,10.525920, "Intero"],
  [42.925620,10.526060, "Mezzo"],
  [42.926170,10.526910, "Piccolo"],
  [42.925750,10.526670, "Piccolo"],
  [42.925360,10.526900, "Mezzo"],
  [42.925270,10.527364, "Intero"],
  [42.925019,10.528526, "Struttura-M2"],
  [42.925540,10.528800, "Struttura-M2"],
  [42.925770,10.528990, "Struttura-M2"],
  [42.925730,10.529060, "Struttura-M2"],
  [42.925370,10.528830, "Struttura-M2"],
  [42.925170,10.528730, "Struttura-M2"],
  [42.926740,10.529660, "Piccolo"],
  [42.927000,10.529830, "Piccolo"],
  [42.927730,10.530240, "Piccolo"],
  [42.925107,10.528653, "Struttura-M2"],
  [42.926440,10.525760, "Piccolo"],
  [42.926170,10.525800, "Intero"],
  [42.925750,10.525870, "Intero"],
  [42.925395,10.525978, "Intero"],
  [42.924588,10.525750, "Piccolo"],
  [42.924441,10.525929, "Piccolo"],
  [42.924920,10.525960, "Piccolo"],
  [42.925230,10.526200, "Intero"],
  [42.924780,10.527020, "Intero"],
  [42.924250,10.527400, "Intero"],
  [42.923570,10.526038, "Altro"],
  [42.923565,10.526351, "Altro"],
  [42.924270,10.527168, "Piccolo"],
  [42.924266,10.527184, "Piccolo"],
  [42.924101,10.527594, "Struttura-M2"],
  [42.923823,10.527471, "Struttura-M2"],
  [42.923831,10.526919, "Intero"],
  [42.923625,10.526857, "Intero"],
  [42.923728,10.527138, "Intero"],
  [42.923462,10.525108, "Piccolo"],
  [42.924250,10.527530, "Intero"],
  [42.925160,10.526490, "Intero"],
  [42.925440,10.526360, "Intero"],
  [42.924990,10.527810, "Mezzo"],
  [42.924690,10.527700, "Piccolo"],
  [42.924880,10.528240, "Mezzo"],
  [42.924700,10.528380, "Struttura-M2"],
  [42.924530,10.528280, "Struttura-M2"],
  [42.924140,10.528030, "Struttura-M2"],
  [42.923850,10.527870, "Struttura-M2"],
  [42.923880,10.527960, "Struttura-M2"],
  [42.924150,10.528130, "Struttura-M2"],
  [42.924450,10.528310, "Struttura-M2"],
  [42.924580,10.528520, "Struttura-M2"],
  [42.924630,10.528700, "Struttura-M2"],
  [42.924660,10.529050, "Struttura-M2"],
  [42.925877,10.529873, "Piccolo"],
  [42.926976,10.531089, "Piccolo"],
  [42.927299,10.531403, "Piccolo"],
  [42.927548,10.531763, "Piccolo"],
  [42.927110,10.531400, "Piccolo"],
  [42.926520,10.530820, "Piccolo"],
  [42.925760,10.529910, "Piccolo"],
  [42.924980,10.529000, "Mezzo"],
  [42.924920,10.529060, "Mezzo"],
  [42.926041,10.531585, "Piccolo"],
  [42.926054,10.531580, "Piccolo"],
  [42.925686,10.531187, "Piccolo"],
  [42.925686,10.531178, "Piccolo"],
  [42.925343,10.530831, "Piccolo"],
  [42.924652,10.530923, "Piccolo"],
  [42.924062,10.533254, "Piccolo"],
  [42.924524,10.530574, "Intero"],
  [42.923670,10.531660, "Piccolo"],
  [42.922675,10.533727, "Struttura-M2"],
  [42.922611,10.534463, "Piccolo"],
  [42.922378,10.534546, "Piccolo"],
  [42.921237,10.533873, "Piccolo"],
  [42.921192,10.533230, "Piccolo"],
  [42.921744,10.532005, "Piccolo"],
  [42.922330,10.533114, "Piccolo"],
  [42.922967,10.532371, "Piccolo"],
  [42.923132,10.532641, "Piccolo"],
  [42.922930,10.531657, "Piccolo"],
  [42.922931,10.531641, "Piccolo"],
  [42.923960,10.528820, "Piccolo"],
  [42.922817,10.530794, "Piccolo"],
  [42.922612,10.531317, "Mezzo"],
  [42.922423,10.531777, "Piccolo"],
  [42.922503,10.531627, "Piccolo"],
  [42.922564,10.531536, "Mezzo"],
  [42.921890,10.531340, "Piccolo"],
  [42.923160,10.528480, "Piccolo"],
  [42.923320,10.528120, "Piccolo"],
  [42.923570,10.527820, "Struttura-M2"],
  [42.923956,10.528578, "Struttura-M2"],
  [42.924450,10.529030, "Piccolo"],
  [42.924450,10.529120, "Piccolo"],
  [42.924450,10.529120, "Piccolo"],
  [42.926938,10.532905, "Piccolo"],
  [42.926846,10.532867, "Piccolo"],
  [42.925910,10.533950, "Piccolo"],
  [42.921068,10.531820, "Intero"],
  [42.921186,10.532172, "Intero"],
  [42.921112,10.529574, "Piccolo"],
  [42.921268,10.528709, "Piccolo"],
  [42.921347,10.527936, "Intero"],
  [42.921430,10.526600, "Intero"],
  [42.921379,10.526468, "Struttura-M3"],
  [42.921118,10.526177, "Struttura-M3"],
  [42.921058,10.526101, "Struttura-M3"],
  [42.920951,10.526006, "Struttura-M3"],
  [42.921076,10.525555, "Struttura-M3"],
  [42.920931,10.525546, "Struttura-M3"],
  [42.920750,10.525535, "Struttura-M3"],
  [42.920558,10.525554, "Struttura-M3"],
  [42.920328,10.525548, "Struttura-M3"],
  [42.919994,10.525621, "Struttura-M3"],
  [42.920183,10.525711, "Struttura-M3"],
  [42.920536,10.525804, "Struttura-M3"],
  [42.920749,10.525903, "Struttura-M3"],
  [42.921300,10.526360, "Struttura-M3"],
  [42.921587,10.526383, "Intero"],
  [42.921198,10.525487, "Altro"],
  [42.922294,10.523814, "Intero"],
  [42.922474,10.525511, "Intero"],
  [42.922642,10.525831, "Piccolo"],
  [42.922055,10.525427, "Intero"],
  [42.921391,10.529482, "Piccolo"],
  [42.921225,10.530150, "Nuovo"],
  [42.921218,10.530283, "Nuovo"],
  [42.921174,10.530450, "Nuovo"],
  [42.921422,10.529584, "Intero"],
  [42.921454,10.528516, "Intero"],
  [42.921489,10.528020, "Intero"],
  [42.921625,10.527300, "Intero"],
  [42.921652,10.528030, "Intero"],
  [42.922317,10.527565, "Mezzo"],
  [42.922840,10.528530, "Piccolo"],
  [42.923254,10.527346, "Struttura-M2"],
  [42.922954,10.527086, "Struttura-M2"],
  [42.923034,10.526462, "Mezzo"],
  [42.922940,10.524900, "Mezzo"],
  [42.922631,10.526588, "Mezzo"],
  [42.922070,10.526801, "Struttura-M2"],
  [42.921950,10.526600, "Struttura-M2"],
  [42.921660,10.526470, "Struttura-M2"],
  [42.921753,10.526792, "Struttura-M2"],
  [42.922094,10.526934, "Struttura-M2"],
  [42.922389,10.526925, "Struttura-M2"],
  [42.922655,10.526954, "Struttura-M2"],
  [42.922830,10.526524, "Mezzo"],
  [42.922851,10.527394, "Mezzo"],
  [42.923176,10.527653, "Struttura-M2"],
  [42.923030,10.528230, "Piccolo"],
  [42.926460,10.518560, "Struttura-B"],
  [42.928090,10.525530, "Piccolo"],
];

// Creazione della mappa
const map = L.map("map", config).setView([lat, lng], zoom);

// Aggiunta del layer delle tile (usando OpenStreetMap)
L.tileLayer("https://tile.openstreetmap.org/{z}/{x}/{y}.png", {
  attribution:
    '&copy; <a href="https://www.openstreetmap.org/copyright">OpenStreetMap</a> contributors',
}).addTo(map);

// Creazione di un gruppo per i marker del gruppo A
const pA = L.layerGroup();

// Creazione di un gruppo per i marker del gruppo B
const pB = L.layerGroup();


// Aggiunta dei marker al gruppo pA con icona personalizzata rossa
for (let i = 0; i < pointsA.length; i++) {
  const marker = L.marker([pointsA[i][0], pointsA[i][1]], {
    icon: L.divIcon({
      className: 'custom-icon-i-am-hare', // Aggiungi classe custom-icon-A
      iconSize: [20, 20],
      iconAnchor: [10, 10],
    }),
  }).bindPopup(pointsA[i][2]);
  pA.addLayer(marker);
}


// Aggiunta dei marker al gruppo pB con icona personalizzata nera
// Aggiunta dei marker al gruppo pB con icona personalizzata nera
for (let i = 0; i < pointsB.length; i++) {
  let iconType = 'black'; // Colore predefinito
  const popupText = pointsB[i][2]; // Testo del popup
  
  // Imposta il colore dell'icona in base alla categoria
  switch (popupText) {
    case 'Mezzo':
      iconType = 'mezzo';
      break;
    case 'Nuovo':
      iconType = 'nuovo';
      break;
    case 'Piccolo':
      iconType = 'piccolo';
      break;
    case 'Struttura-M3':
      iconType = 'struttura-m3';
      break;
    case 'Intero':
      iconType = 'intero';
      break;
    case 'Struttura-M2':
      iconType = 'struttura-m2';
      break;
    case 'Mezzo':
      iconType = 'mezzo';
      break;
    case 'Struttura-M':
      iconType = 'struttura-m';
      break;
    case 'Struttura-B2':
      iconType = 'struttura-b2';
      break;
    case 'Struttura-B':
      iconType = 'struttura-b';
      break;
  }
  
  const marker = L.marker([pointsB[i][0], pointsB[i][1]], {
    icon: L.divIcon({
      className: `custom-icon-cestini custom-icon-cestini-${iconType}`,
      iconSize: [20, 20],
      iconAnchor: [10, 10],
    }),
  }).bindPopup(popupText);
  pB.addLayer(marker);
}
// Oggetto con i layer sovrapposti
const overlayMaps = {
  "I am here": pA,
  "Cestini": pB,
};

// Aggiunta dei layer sovrapposti alla mappa
L.control.layers(null, overlayMaps).addTo(map);