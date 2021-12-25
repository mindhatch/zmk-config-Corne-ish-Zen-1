#define SK(KEY) &nk KEY KEY
#define MO(LAYER) &mo_tap LAYER F24
#define MO(LAYER) &mo_tap LAYER key_repeat

// Keep sticky keys active for a long time so they effectively do not time out
#define STICKY_KEY_TIMEOUT 60000