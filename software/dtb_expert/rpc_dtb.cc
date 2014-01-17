// RPC functions for DTB
// created: 
// This is an auto generated file
// *** DO NOT EDIT THIS FILE ***

#include "pixel_dtb.h"
const char rpc_timestamp[] = "";

extern CRpcError rpc_error;
extern CTestboard tb;

bool rpc__GetRpcVersion$S(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint16_t rpc_par0 = tb.GetRpcVersion();
	msg.Create(0);
	msg.Put_UINT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetRpcCallId$i3c(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	string rpc_par1; if (!rpc_Receive(rpc_io, rpc_par1)) return false;
	int32_t rpc_par0 = tb.GetRpcCallId(rpc_par1);
	msg.Create(1);
	msg.Put_INT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetRpcTimestamp$v4c(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	stringR rpc_par1;
	tb.GetRpcTimestamp(rpc_par1);
	msg.Create(2);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par1)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetRpcCallCount$i(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	int32_t rpc_par0 = tb.GetRpcCallCount();
	msg.Create(3);
	msg.Put_INT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetRpcCallName$bi4c(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(4)) return false;
	int32_t rpc_par1 = msg.Get_INT32();
	stringR rpc_par2;
	bool rpc_par0 = tb.GetRpcCallName(rpc_par1,rpc_par2);
	msg.Create(4);
	msg.Put_BOOL(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par2)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetInfo$v4c(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	stringR rpc_par1;
	tb.GetInfo(rpc_par1);
	msg.Create(5);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par1)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetBoardId$S(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint16_t rpc_par0 = tb.GetBoardId();
	msg.Create(6);
	msg.Put_UINT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetHWVersion$v4c(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	stringR rpc_par1;
	tb.GetHWVersion(rpc_par1);
	msg.Create(7);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par1)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetFWVersion$S(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint16_t rpc_par0 = tb.GetFWVersion();
	msg.Create(8);
	msg.Put_UINT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetSWVersion$S(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint16_t rpc_par0 = tb.GetSWVersion();
	msg.Create(9);
	msg.Put_UINT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__UpgradeGetVersion$S(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint16_t rpc_par0 = tb.UpgradeGetVersion();
	msg.Create(10);
	msg.Put_UINT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__UpgradeStart$CS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	uint8_t rpc_par0 = tb.UpgradeStart(rpc_par1);
	msg.Create(11);
	msg.Put_UINT8(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__UpgradeData$C3c(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	string rpc_par1; if (!rpc_Receive(rpc_io, rpc_par1)) return false;
	uint8_t rpc_par0 = tb.UpgradeData(rpc_par1);
	msg.Create(12);
	msg.Put_UINT8(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__UpgradeError$C(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint8_t rpc_par0 = tb.UpgradeError();
	msg.Create(13);
	msg.Put_UINT8(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__UpgradeErrorMsg$v4c(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	stringR rpc_par1;
	tb.UpgradeErrorMsg(rpc_par1);
	msg.Create(14);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par1)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__UpgradeExec$vS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	tb.UpgradeExec(rpc_par1);
	return true;
}

bool rpc__Init$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Init();
	return true;
}

bool rpc__Welcome$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Welcome();
	return true;
}

bool rpc__SetLed$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.SetLed(rpc_par1);
	return true;
}

bool rpc__cDelay$vS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	tb.cDelay(rpc_par1);
	return true;
}

bool rpc__uDelay$vS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	tb.uDelay(rpc_par1);
	return true;
}

bool rpc__SetClockSource$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.SetClockSource(rpc_par1);
	return true;
}

bool rpc__Sig_SetMode$vCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	tb.Sig_SetMode(rpc_par1,rpc_par2);
	return true;
}

bool rpc__Sig_SetPRBS$vCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	tb.Sig_SetPRBS(rpc_par1,rpc_par2);
	return true;
}

bool rpc__Sig_SetDelay$vCSc(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(4)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint16_t rpc_par2 = msg.Get_UINT16();
	int8_t rpc_par3 = msg.Get_INT8();
	tb.Sig_SetDelay(rpc_par1,rpc_par2,rpc_par3);
	return true;
}

bool rpc__Sig_SetLevel$vCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	tb.Sig_SetLevel(rpc_par1,rpc_par2);
	return true;
}

bool rpc__Sig_SetOffset$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.Sig_SetOffset(rpc_par1);
	return true;
}

bool rpc__Sig_SetLVDS$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Sig_SetLVDS();
	return true;
}

bool rpc__Sig_SetLCDS$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Sig_SetLCDS();
	return true;
}

bool rpc__SignalProbeD1$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.SignalProbeD1(rpc_par1);
	return true;
}

bool rpc__SignalProbeD2$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.SignalProbeD2(rpc_par1);
	return true;
}

bool rpc__SignalProbeA1$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.SignalProbeA1(rpc_par1);
	return true;
}

bool rpc__SignalProbeA2$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.SignalProbeA2(rpc_par1);
	return true;
}

bool rpc__SignalProbeADC$vCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	tb.SignalProbeADC(rpc_par1,rpc_par2);
	return true;
}

bool rpc__Pon$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Pon();
	return true;
}

bool rpc__Poff$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Poff();
	return true;
}

bool rpc___SetVD$vS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	tb._SetVD(rpc_par1);
	return true;
}

bool rpc___SetVA$vS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	tb._SetVA(rpc_par1);
	return true;
}

bool rpc___SetID$vS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	tb._SetID(rpc_par1);
	return true;
}

bool rpc___SetIA$vS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	tb._SetIA(rpc_par1);
	return true;
}

bool rpc___GetVD$S(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint16_t rpc_par0 = tb._GetVD();
	msg.Create(40);
	msg.Put_UINT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc___GetVA$S(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint16_t rpc_par0 = tb._GetVA();
	msg.Create(41);
	msg.Put_UINT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc___GetID$S(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint16_t rpc_par0 = tb._GetID();
	msg.Create(42);
	msg.Put_UINT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc___GetIA$S(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint16_t rpc_par0 = tb._GetIA();
	msg.Create(43);
	msg.Put_UINT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__HVon$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.HVon();
	return true;
}

bool rpc__HVoff$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.HVoff();
	return true;
}

bool rpc__ResetOn$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.ResetOn();
	return true;
}

bool rpc__ResetOff$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.ResetOff();
	return true;
}

bool rpc__GetStatus$C(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint8_t rpc_par0 = tb.GetStatus();
	msg.Create(48);
	msg.Put_UINT8(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__SetRocAddress$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.SetRocAddress(rpc_par1);
	return true;
}

bool rpc__Pg_SetCmd$vSS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(4)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	uint16_t rpc_par2 = msg.Get_UINT16();
	tb.Pg_SetCmd(rpc_par1,rpc_par2);
	return true;
}

bool rpc__Pg_Stop$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Pg_Stop();
	return true;
}

bool rpc__Pg_Single$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Pg_Single();
	return true;
}

bool rpc__Pg_Trigger$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Pg_Trigger();
	return true;
}

bool rpc__Pg_Loop$vS(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	tb.Pg_Loop(rpc_par1);
	return true;
}

bool rpc__Daq_Open$IIC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(5)) return false;
	uint32_t rpc_par1 = msg.Get_UINT32();
	uint8_t rpc_par2 = msg.Get_UINT8();
	uint32_t rpc_par0 = tb.Daq_Open(rpc_par1,rpc_par2);
	msg.Create(55);
	msg.Put_UINT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__Daq_Close$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.Daq_Close(rpc_par1);
	return true;
}

bool rpc__Daq_Start$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.Daq_Start(rpc_par1);
	return true;
}

bool rpc__Daq_Stop$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.Daq_Stop(rpc_par1);
	return true;
}

bool rpc__Daq_GetSize$IC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint32_t rpc_par0 = tb.Daq_GetSize(rpc_par1);
	msg.Create(59);
	msg.Put_UINT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__Daq_Read$C2SSC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(3)) return false;
	uint16_t rpc_par2 = msg.Get_UINT16();
	uint8_t rpc_par3 = msg.Get_UINT8();
	vectorR<uint16_t> rpc_par1;
	uint8_t rpc_par0 = tb.Daq_Read(rpc_par1,rpc_par2,rpc_par3);
	msg.Create(60);
	msg.Put_UINT8(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par1)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__Daq_Read$C2SS0IC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(7)) return false;
	uint16_t rpc_par2 = msg.Get_UINT16();
	uint32_t rpc_par3 = msg.Get_UINT32();
	uint8_t rpc_par4 = msg.Get_UINT8();
	vectorR<uint16_t> rpc_par1;
	uint8_t rpc_par0 = tb.Daq_Read(rpc_par1,rpc_par2,rpc_par3,rpc_par4);
	msg.Create(61);
	msg.Put_UINT8(rpc_par0);
	msg.Put_UINT32(rpc_par3);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par1)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__Daq_Select_ADC$vSCCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(5)) return false;
	uint16_t rpc_par1 = msg.Get_UINT16();
	uint8_t rpc_par2 = msg.Get_UINT8();
	uint8_t rpc_par3 = msg.Get_UINT8();
	uint8_t rpc_par4 = msg.Get_UINT8();
	tb.Daq_Select_ADC(rpc_par1,rpc_par2,rpc_par3,rpc_par4);
	return true;
}

bool rpc__Daq_Select_Deser160$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.Daq_Select_Deser160(rpc_par1);
	return true;
}

bool rpc__Daq_Select_Deser400$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Daq_Select_Deser400();
	return true;
}

bool rpc__Daq_Deser400_Reset$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.Daq_Deser400_Reset(rpc_par1);
	return true;
}

bool rpc__Daq_DeselectAll$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.Daq_DeselectAll();
	return true;
}

bool rpc__roc_I2cAddr$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.roc_I2cAddr(rpc_par1);
	return true;
}

bool rpc__roc_ClrCal$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.roc_ClrCal();
	return true;
}

bool rpc__roc_SetDAC$vCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	tb.roc_SetDAC(rpc_par1,rpc_par2);
	return true;
}

bool rpc__roc_Pix$vCCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(3)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	uint8_t rpc_par3 = msg.Get_UINT8();
	tb.roc_Pix(rpc_par1,rpc_par2,rpc_par3);
	return true;
}

bool rpc__roc_Pix_Trim$vCCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(3)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	uint8_t rpc_par3 = msg.Get_UINT8();
	tb.roc_Pix_Trim(rpc_par1,rpc_par2,rpc_par3);
	return true;
}

bool rpc__roc_Pix_Mask$vCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	tb.roc_Pix_Mask(rpc_par1,rpc_par2);
	return true;
}

bool rpc__roc_Pix_Cal$vCCb(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(3)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	bool rpc_par3 = msg.Get_BOOL();
	tb.roc_Pix_Cal(rpc_par1,rpc_par2,rpc_par3);
	return true;
}

bool rpc__roc_Col_Enable$vCb(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	bool rpc_par2 = msg.Get_BOOL();
	tb.roc_Col_Enable(rpc_par1,rpc_par2);
	return true;
}

bool rpc__roc_Col_Mask$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.roc_Col_Mask(rpc_par1);
	return true;
}

bool rpc__roc_Chip_Mask$v(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	tb.roc_Chip_Mask();
	return true;
}

bool rpc__TBM_Present$b(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	bool rpc_par0 = tb.TBM_Present();
	msg.Create(77);
	msg.Put_BOOL(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__tbm_Enable$vb(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	bool rpc_par1 = msg.Get_BOOL();
	tb.tbm_Enable(rpc_par1);
	return true;
}

bool rpc__tbm_Addr$vCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	tb.tbm_Addr(rpc_par1,rpc_par2);
	return true;
}

bool rpc__mod_Addr$vC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(1)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	tb.mod_Addr(rpc_par1);
	return true;
}

bool rpc__tbm_Set$vCC(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	tb.tbm_Set(rpc_par1,rpc_par2);
	return true;
}

bool rpc__tbm_Get$bC0C(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	bool rpc_par0 = tb.tbm_Get(rpc_par1,rpc_par2);
	msg.Create(82);
	msg.Put_BOOL(rpc_par0);
	msg.Put_UINT8(rpc_par2);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__tbm_GetRaw$bC0I(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(5)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint32_t rpc_par2 = msg.Get_UINT32();
	bool rpc_par0 = tb.tbm_GetRaw(rpc_par1,rpc_par2);
	msg.Create(83);
	msg.Put_BOOL(rpc_par0);
	msg.Put_UINT32(rpc_par2);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__GetPixelAddressInverted$b(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	bool rpc_par0 = tb.GetPixelAddressInverted();
	msg.Create(84);
	msg.Put_BOOL(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__CountReadouts$ii(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(4)) return false;
	int32_t rpc_par1 = msg.Get_INT32();
	int32_t rpc_par0 = tb.CountReadouts(rpc_par1);
	msg.Create(85);
	msg.Put_INT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__CountReadouts$iii(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(8)) return false;
	int32_t rpc_par1 = msg.Get_INT32();
	int32_t rpc_par2 = msg.Get_INT32();
	int32_t rpc_par0 = tb.CountReadouts(rpc_par1,rpc_par2);
	msg.Create(86);
	msg.Put_INT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__CountReadouts$iiii(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(12)) return false;
	int32_t rpc_par1 = msg.Get_INT32();
	int32_t rpc_par2 = msg.Get_INT32();
	int32_t rpc_par3 = msg.Get_INT32();
	int32_t rpc_par0 = tb.CountReadouts(rpc_par1,rpc_par2,rpc_par3);
	msg.Create(87);
	msg.Put_INT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__PH$iiiis(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(14)) return false;
	int32_t rpc_par1 = msg.Get_INT32();
	int32_t rpc_par2 = msg.Get_INT32();
	int32_t rpc_par3 = msg.Get_INT32();
	int16_t rpc_par4 = msg.Get_INT16();
	int32_t rpc_par0 = tb.PH(rpc_par1,rpc_par2,rpc_par3,rpc_par4);
	msg.Create(88);
	msg.Put_INT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__PixelThreshold$iiiiiiiiiii(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(40)) return false;
	int32_t rpc_par1 = msg.Get_INT32();
	int32_t rpc_par2 = msg.Get_INT32();
	int32_t rpc_par3 = msg.Get_INT32();
	int32_t rpc_par4 = msg.Get_INT32();
	int32_t rpc_par5 = msg.Get_INT32();
	int32_t rpc_par6 = msg.Get_INT32();
	int32_t rpc_par7 = msg.Get_INT32();
	int32_t rpc_par8 = msg.Get_INT32();
	int32_t rpc_par9 = msg.Get_INT32();
	int32_t rpc_par10 = msg.Get_INT32();
	int32_t rpc_par0 = tb.PixelThreshold(rpc_par1,rpc_par2,rpc_par3,rpc_par4,rpc_par5,rpc_par6,rpc_par7,rpc_par8,rpc_par9,rpc_par10);
	msg.Create(89);
	msg.Put_INT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__test_pixel_address$bii(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(8)) return false;
	int32_t rpc_par1 = msg.Get_INT32();
	int32_t rpc_par2 = msg.Get_INT32();
	bool rpc_par0 = tb.test_pixel_address(rpc_par1,rpc_par2);
	msg.Create(90);
	msg.Put_BOOL(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__CalibratePixel$csss0s0i(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(12)) return false;
	int16_t rpc_par1 = msg.Get_INT16();
	int16_t rpc_par2 = msg.Get_INT16();
	int16_t rpc_par3 = msg.Get_INT16();
	int16_t rpc_par4 = msg.Get_INT16();
	int32_t rpc_par5 = msg.Get_INT32();
	int8_t rpc_par0 = tb.CalibratePixel(rpc_par1,rpc_par2,rpc_par3,rpc_par4,rpc_par5);
	msg.Create(91);
	msg.Put_INT8(rpc_par0);
	msg.Put_INT16(rpc_par4);
	msg.Put_INT32(rpc_par5);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__CalibrateDacScan$csssss2s2i(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(10)) return false;
	int16_t rpc_par1 = msg.Get_INT16();
	int16_t rpc_par2 = msg.Get_INT16();
	int16_t rpc_par3 = msg.Get_INT16();
	int16_t rpc_par4 = msg.Get_INT16();
	int16_t rpc_par5 = msg.Get_INT16();
	vectorR<int16_t> rpc_par6;
	vectorR<int32_t> rpc_par7;
	int8_t rpc_par0 = tb.CalibrateDacScan(rpc_par1,rpc_par2,rpc_par3,rpc_par4,rpc_par5,rpc_par6,rpc_par7);
	msg.Create(92);
	msg.Put_INT8(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par6)) return false;
	if (!rpc_Send(rpc_io, rpc_par7)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__CalibrateDacDacScan$csssssss2s2i(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(14)) return false;
	int16_t rpc_par1 = msg.Get_INT16();
	int16_t rpc_par2 = msg.Get_INT16();
	int16_t rpc_par3 = msg.Get_INT16();
	int16_t rpc_par4 = msg.Get_INT16();
	int16_t rpc_par5 = msg.Get_INT16();
	int16_t rpc_par6 = msg.Get_INT16();
	int16_t rpc_par7 = msg.Get_INT16();
	vectorR<int16_t> rpc_par8;
	vectorR<int32_t> rpc_par9;
	int8_t rpc_par0 = tb.CalibrateDacDacScan(rpc_par1,rpc_par2,rpc_par3,rpc_par4,rpc_par5,rpc_par6,rpc_par7,rpc_par8,rpc_par9);
	msg.Create(93);
	msg.Put_INT8(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par8)) return false;
	if (!rpc_Send(rpc_io, rpc_par9)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__TrimChip$s1s(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	vector<int16_t> rpc_par1; if (!rpc_Receive(rpc_io, rpc_par1)) return false;
	int16_t rpc_par0 = tb.TrimChip(rpc_par1);
	msg.Create(94);
	msg.Put_INT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__CalibrateMap$ss2s2i2I(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	int16_t rpc_par1 = msg.Get_INT16();
	vectorR<int16_t> rpc_par2;
	vectorR<int32_t> rpc_par3;
	vectorR<uint32_t> rpc_par4;
	int16_t rpc_par0 = tb.CalibrateMap(rpc_par1,rpc_par2,rpc_par3,rpc_par4);
	msg.Create(95);
	msg.Put_INT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par2)) return false;
	if (!rpc_Send(rpc_io, rpc_par3)) return false;
	if (!rpc_Send(rpc_io, rpc_par4)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__TriggerRow$ssss(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(6)) return false;
	int16_t rpc_par1 = msg.Get_INT16();
	int16_t rpc_par2 = msg.Get_INT16();
	int16_t rpc_par3 = msg.Get_INT16();
	int16_t rpc_par0 = tb.TriggerRow(rpc_par1,rpc_par2,rpc_par3);
	msg.Create(96);
	msg.Put_INT16(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__TestColPixel$bCC2C(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(2)) return false;
	uint8_t rpc_par1 = msg.Get_UINT8();
	uint8_t rpc_par2 = msg.Get_UINT8();
	vectorR<uint8_t> rpc_par3;
	bool rpc_par0 = tb.TestColPixel(rpc_par1,rpc_par2,rpc_par3);
	msg.Create(97);
	msg.Put_BOOL(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	if (!rpc_Send(rpc_io, rpc_par3)) return false;
	rpc_io.Flush();
	return true;
}

bool rpc__Ethernet_Send$v3c(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	string rpc_par1; if (!rpc_Receive(rpc_io, rpc_par1)) return false;
	tb.Ethernet_Send(rpc_par1);
	return true;
}

bool rpc__Ethernet_RecvPackets$I(CRpcIo &rpc_io, rpcMessage &msg)
{
	if (!msg.CheckSize(0)) return false;
	uint32_t rpc_par0 = tb.Ethernet_RecvPackets();
	msg.Create(99);
	msg.Put_UINT32(rpc_par0);
	if (!msg.Send(rpc_io)) return false;
	rpc_io.Flush();
	return true;
}

const uint16_t rpc_cmdListSize = 100;

const CRpcCall rpc_cmdlist[] =
{
	/*     0 */ { rpc__GetRpcVersion$S, "GetRpcVersion$S" },
	/*     1 */ { rpc__GetRpcCallId$i3c, "GetRpcCallId$i3c" },
	/*     2 */ { rpc__GetRpcTimestamp$v4c, "GetRpcTimestamp$v4c" },
	/*     3 */ { rpc__GetRpcCallCount$i, "GetRpcCallCount$i" },
	/*     4 */ { rpc__GetRpcCallName$bi4c, "GetRpcCallName$bi4c" },
	/*     5 */ { rpc__GetInfo$v4c, "GetInfo$v4c" },
	/*     6 */ { rpc__GetBoardId$S, "GetBoardId$S" },
	/*     7 */ { rpc__GetHWVersion$v4c, "GetHWVersion$v4c" },
	/*     8 */ { rpc__GetFWVersion$S, "GetFWVersion$S" },
	/*     9 */ { rpc__GetSWVersion$S, "GetSWVersion$S" },
	/*    10 */ { rpc__UpgradeGetVersion$S, "UpgradeGetVersion$S" },
	/*    11 */ { rpc__UpgradeStart$CS, "UpgradeStart$CS" },
	/*    12 */ { rpc__UpgradeData$C3c, "UpgradeData$C3c" },
	/*    13 */ { rpc__UpgradeError$C, "UpgradeError$C" },
	/*    14 */ { rpc__UpgradeErrorMsg$v4c, "UpgradeErrorMsg$v4c" },
	/*    15 */ { rpc__UpgradeExec$vS, "UpgradeExec$vS" },
	/*    16 */ { rpc__Init$v, "Init$v" },
	/*    17 */ { rpc__Welcome$v, "Welcome$v" },
	/*    18 */ { rpc__SetLed$vC, "SetLed$vC" },
	/*    19 */ { rpc__cDelay$vS, "cDelay$vS" },
	/*    20 */ { rpc__uDelay$vS, "uDelay$vS" },
	/*    21 */ { rpc__SetClockSource$vC, "SetClockSource$vC" },
	/*    22 */ { rpc__Sig_SetMode$vCC, "Sig_SetMode$vCC" },
	/*    23 */ { rpc__Sig_SetPRBS$vCC, "Sig_SetPRBS$vCC" },
	/*    24 */ { rpc__Sig_SetDelay$vCSc, "Sig_SetDelay$vCSc" },
	/*    25 */ { rpc__Sig_SetLevel$vCC, "Sig_SetLevel$vCC" },
	/*    26 */ { rpc__Sig_SetOffset$vC, "Sig_SetOffset$vC" },
	/*    27 */ { rpc__Sig_SetLVDS$v, "Sig_SetLVDS$v" },
	/*    28 */ { rpc__Sig_SetLCDS$v, "Sig_SetLCDS$v" },
	/*    29 */ { rpc__SignalProbeD1$vC, "SignalProbeD1$vC" },
	/*    30 */ { rpc__SignalProbeD2$vC, "SignalProbeD2$vC" },
	/*    31 */ { rpc__SignalProbeA1$vC, "SignalProbeA1$vC" },
	/*    32 */ { rpc__SignalProbeA2$vC, "SignalProbeA2$vC" },
	/*    33 */ { rpc__SignalProbeADC$vCC, "SignalProbeADC$vCC" },
	/*    34 */ { rpc__Pon$v, "Pon$v" },
	/*    35 */ { rpc__Poff$v, "Poff$v" },
	/*    36 */ { rpc___SetVD$vS, "_SetVD$vS" },
	/*    37 */ { rpc___SetVA$vS, "_SetVA$vS" },
	/*    38 */ { rpc___SetID$vS, "_SetID$vS" },
	/*    39 */ { rpc___SetIA$vS, "_SetIA$vS" },
	/*    40 */ { rpc___GetVD$S, "_GetVD$S" },
	/*    41 */ { rpc___GetVA$S, "_GetVA$S" },
	/*    42 */ { rpc___GetID$S, "_GetID$S" },
	/*    43 */ { rpc___GetIA$S, "_GetIA$S" },
	/*    44 */ { rpc__HVon$v, "HVon$v" },
	/*    45 */ { rpc__HVoff$v, "HVoff$v" },
	/*    46 */ { rpc__ResetOn$v, "ResetOn$v" },
	/*    47 */ { rpc__ResetOff$v, "ResetOff$v" },
	/*    48 */ { rpc__GetStatus$C, "GetStatus$C" },
	/*    49 */ { rpc__SetRocAddress$vC, "SetRocAddress$vC" },
	/*    50 */ { rpc__Pg_SetCmd$vSS, "Pg_SetCmd$vSS" },
	/*    51 */ { rpc__Pg_Stop$v, "Pg_Stop$v" },
	/*    52 */ { rpc__Pg_Single$v, "Pg_Single$v" },
	/*    53 */ { rpc__Pg_Trigger$v, "Pg_Trigger$v" },
	/*    54 */ { rpc__Pg_Loop$vS, "Pg_Loop$vS" },
	/*    55 */ { rpc__Daq_Open$IIC, "Daq_Open$IIC" },
	/*    56 */ { rpc__Daq_Close$vC, "Daq_Close$vC" },
	/*    57 */ { rpc__Daq_Start$vC, "Daq_Start$vC" },
	/*    58 */ { rpc__Daq_Stop$vC, "Daq_Stop$vC" },
	/*    59 */ { rpc__Daq_GetSize$IC, "Daq_GetSize$IC" },
	/*    60 */ { rpc__Daq_Read$C2SSC, "Daq_Read$C2SSC" },
	/*    61 */ { rpc__Daq_Read$C2SS0IC, "Daq_Read$C2SS0IC" },
	/*    62 */ { rpc__Daq_Select_ADC$vSCCC, "Daq_Select_ADC$vSCCC" },
	/*    63 */ { rpc__Daq_Select_Deser160$vC, "Daq_Select_Deser160$vC" },
	/*    64 */ { rpc__Daq_Select_Deser400$v, "Daq_Select_Deser400$v" },
	/*    65 */ { rpc__Daq_Deser400_Reset$vC, "Daq_Deser400_Reset$vC" },
	/*    66 */ { rpc__Daq_DeselectAll$v, "Daq_DeselectAll$v" },
	/*    67 */ { rpc__roc_I2cAddr$vC, "roc_I2cAddr$vC" },
	/*    68 */ { rpc__roc_ClrCal$v, "roc_ClrCal$v" },
	/*    69 */ { rpc__roc_SetDAC$vCC, "roc_SetDAC$vCC" },
	/*    70 */ { rpc__roc_Pix$vCCC, "roc_Pix$vCCC" },
	/*    71 */ { rpc__roc_Pix_Trim$vCCC, "roc_Pix_Trim$vCCC" },
	/*    72 */ { rpc__roc_Pix_Mask$vCC, "roc_Pix_Mask$vCC" },
	/*    73 */ { rpc__roc_Pix_Cal$vCCb, "roc_Pix_Cal$vCCb" },
	/*    74 */ { rpc__roc_Col_Enable$vCb, "roc_Col_Enable$vCb" },
	/*    75 */ { rpc__roc_Col_Mask$vC, "roc_Col_Mask$vC" },
	/*    76 */ { rpc__roc_Chip_Mask$v, "roc_Chip_Mask$v" },
	/*    77 */ { rpc__TBM_Present$b, "TBM_Present$b" },
	/*    78 */ { rpc__tbm_Enable$vb, "tbm_Enable$vb" },
	/*    79 */ { rpc__tbm_Addr$vCC, "tbm_Addr$vCC" },
	/*    80 */ { rpc__mod_Addr$vC, "mod_Addr$vC" },
	/*    81 */ { rpc__tbm_Set$vCC, "tbm_Set$vCC" },
	/*    82 */ { rpc__tbm_Get$bC0C, "tbm_Get$bC0C" },
	/*    83 */ { rpc__tbm_GetRaw$bC0I, "tbm_GetRaw$bC0I" },
	/*    84 */ { rpc__GetPixelAddressInverted$b, "GetPixelAddressInverted$b" },
	/*    85 */ { rpc__CountReadouts$ii, "CountReadouts$ii" },
	/*    86 */ { rpc__CountReadouts$iii, "CountReadouts$iii" },
	/*    87 */ { rpc__CountReadouts$iiii, "CountReadouts$iiii" },
	/*    88 */ { rpc__PH$iiiis, "PH$iiiis" },
	/*    89 */ { rpc__PixelThreshold$iiiiiiiiiii, "PixelThreshold$iiiiiiiiiii" },
	/*    90 */ { rpc__test_pixel_address$bii, "test_pixel_address$bii" },
	/*    91 */ { rpc__CalibratePixel$csss0s0i, "CalibratePixel$csss0s0i" },
	/*    92 */ { rpc__CalibrateDacScan$csssss2s2i, "CalibrateDacScan$csssss2s2i" },
	/*    93 */ { rpc__CalibrateDacDacScan$csssssss2s2i, "CalibrateDacDacScan$csssssss2s2i" },
	/*    94 */ { rpc__TrimChip$s1s, "TrimChip$s1s" },
	/*    95 */ { rpc__CalibrateMap$ss2s2i2I, "CalibrateMap$ss2s2i2I" },
	/*    96 */ { rpc__TriggerRow$ssss, "TriggerRow$ssss" },
	/*    97 */ { rpc__TestColPixel$bCC2C, "TestColPixel$bCC2C" },
	/*    98 */ { rpc__Ethernet_Send$v3c, "Ethernet_Send$v3c" },
	/*    99 */ { rpc__Ethernet_RecvPackets$I, "Ethernet_RecvPackets$I" }
};

void rpc_Dispatcher(CRpcIo &rpc_io)
{
	rpcMessage msg;
	while (true)
	{
		msg.Receive(rpc_io);
		if (rpc_error.HasError()) continue;
		if (msg.GetCmd() >= 100) continue;
		rpc_cmdlist[msg.GetCmd()].call(rpc_io, msg);
	}
}
