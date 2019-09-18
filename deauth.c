/* deauth(MACAddress const&, MACAddress const&, unsigned char, unsigned char) */
/*  deauth [mac] [bssid] [channel] [multiplier] */
void deauth(MACAddress *param_1,MACAddress *param_2,uchar param_3,uchar param_4)
{
  void *__src;
  undefined3 in_register_0000001c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uchar local_10;
  undefined local_f;
  undefined local_e;
  undefined local_d;
  uchar multiplier;
  
  local_18 = 0;
  local_14 = 0;
  local_1c = 0;
  local_f = (undefined)((uint3)in_register_0000001c >> 0x10);
  local_e = 0;
  local_d = 0;
  local_10 = param_3;
  multiplier = param_4;
  __src = (void *)getMacBin(param_2);
  memcpy(&local_1c,__src,6);
  __src = (void *)getMacBin(param_1);
  memcpy((void *)((int)&local_18 + 2),__src,6);
  FUN_00403d78(8,&local_1c,0x11);
  return;
}