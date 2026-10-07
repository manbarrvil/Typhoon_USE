<?xml version="1.0" encoding="UTF-8"?>
<SCL revision="B" version="2007" xmlns="http://www.iec.ch/61850/2003/SCL" xsi:schemaLocation="http://www.iec.ch/61850/2003/SCL SCL.xsd" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">
	<Header revision="1" version="1" id="ID"/>
	<Communication>
		<SubNetwork name="WA1" type="8-MMS">
			<ConnectedAP apName="AP" iedName="LD">
				<Address>
					<P type="OSI-AP-Title">1,3,9999,23</P>
					<P type="OSI-AE-Qualifier">23</P>
					<P type="OSI-PSEL">00000001</P>
					<P type="OSI-SSEL">0001</P>
					<P type="OSI-TSEL">0001</P>
					<P type="IP">192.168.0.203</P>
					<P type="IP-SUBNET">255.255.255.0</P>
					<P type="IP-GATEWAY">192.168.0.1</P>
				</Address>
				<GSE ldInst="LD0" cbName="gcbTEST">
					<Address>
						<P type="VLAN-ID">000</P>
						<P type="VLAN-PRIORITY">4</P>
						<P type="MAC-Address">01-0C-CD-01-00-24</P>
						<P type="APPID">0000</P>
					</Address>
					<MinTime>40</MinTime>
					<MaxTime>2000</MaxTime>
				</GSE>
				<GSE ldInst="LD0" cbName="gcbSTAT">
					<Address>
						<P type="VLAN-ID">111</P>
						<P type="VLAN-PRIORITY">4</P>
						<P type="MAC-Address">01-0C-CD-01-00-24</P>
						<P type="APPID">1000</P>
					</Address>
					<MinTime>30</MinTime>
					<MaxTime>2000</MaxTime>
				</GSE>
				<GSE ldInst="LD0" cbName="gcbCBPOS">
					<Address>
						<P type="VLAN-ID">222</P>
						<P type="VLAN-PRIORITY">4</P>
						<P type="MAC-Address">01-0C-CD-01-00-24</P>
						<P type="APPID">2000</P>
					</Address>
					<MinTime>30</MinTime>
					<MaxTime>2000</MaxTime>
				</GSE>
			</ConnectedAP>
		</SubNetwork>
		<SubNetwork name="WA2" type="8-MMS">
			<ConnectedAP apName="AP" iedName="IED">
				<Address>
					<P type="OSI-AP-Title">1,3,9999,23</P>
					<P type="OSI-AE-Qualifier">23</P>
					<P type="OSI-PSEL">00000001</P>
					<P type="OSI-SSEL">0001</P>
					<P type="OSI-TSEL">0001</P>
					<P type="IP">192.168.0.203</P>
					<P type="IP-SUBNET">255.255.255.0</P>
					<P type="IP-GATEWAY">192.168.0.1</P>
				</Address>
				<GSE ldInst="IED0" cbName="gcbMEAS">
					<Address>
						<P type="VLAN-ID">000</P>
						<P type="VLAN-PRIORITY">4</P>
						<P type="MAC-Address">01-0c-cd-01-00-24</P>
						<P type="APPID">0000</P>
					</Address>
					<MinTime>30</MinTime>
					<MaxTime>2000</MaxTime>
				</GSE>
				<GSE ldInst="IED0" cbName="gcbSTRUCT">
					<Address>
						<P type="VLAN-ID">000</P>
						<P type="VLAN-PRIORITY">4</P>
						<P type="MAC-Address">01-0c-cd-01-00-24</P>
						<P type="APPID">0001</P>
					</Address>
					<MinTime>100</MinTime>
					<MaxTime>2000</MaxTime>
				</GSE>
			</ConnectedAP>
		</SubNetwork>
	</Communication>
	<IED name="LD" manufacturer="TMW" configVersion="1.0" originalSclRevision="B" originalSclVersion="2007">
		<Services>
			<DynAssociation max="10"/>
			<ConfLogControl max="10"/>
			<GOOSE max="10"/>
			<GSSE max="50"/>
			<SMVsc max="20"/>
			<GetDirectory/>
			<GetDataObjectDefinition/>
			<DataObjectDirectory/>
			<GetDataSetValue/>
			<SetDataSetValue/>
			<DataSetDirectory/>
			<ConfDataSet modify="false" maxAttributes="50" max="10"/>
			<DynDataSet max="100" maxAttributes="50"/>
			<ReadWrite/>
			<ConfReportControl bufConf="true" bufMode="both" max="0"/>
			<GetCBValues/>
			<ReportSettings rptID="Dyn" trgOps="Dyn" intgPd="Dyn" optFields="Dyn" cbName="Conf" datSet="Dyn" bufTime="Dyn" resvTms="true" owner="true"/>
			<LogSettings trgOps="Dyn" intgPd="Dyn" cbName="Conf" datSet="Dyn" logEna="Dyn"/>
			<GSESettings appID="Dyn" dataLabel="Dyn" cbName="Conf" datSet="Dyn"/>
			<FileHandling/>
			<ConfLNs/>
			<ClientServices sv="true" readLog="true" bufReport="true" goose="true" unbufReport="true"/>
		</Services>
		<AccessPoint name="AP">
			<Server>
				<Authentication/>
				<LDevice inst="0">
					<LN0 lnType="LLN0_TYPE" lnClass="LLN0" inst="">
						<DataSet name="TEST">
							<FCDA prefix="LS" ldInst="0" lnClass="PTRC" lnInst="1" doName="Tr1" daName="general" fc="ST"/>
							<FCDA prefix="LS" ldInst="0" lnClass="PTRC" lnInst="1" doName="Tr1" daName="q" fc="ST"/>
						</DataSet>
						<DataSet name="STAT">
							<FCDA ldInst="0" lnClass="XCBR" lnInst="1" doName="Pos" daName="stVal" fc="ST"/>
						</DataSet>
						<DataSet name="CBPOS">
							<FCDA ldInst="0" lnClass="XCBR" lnInst="1" doName="Pos" fc="ST"/>
						</DataSet>
						<DOI name="Beh">
							<DAI name="stVal">
								<Val>on</Val>
							</DAI>
						</DOI>
						<GSEControl appID="LA99B" name="gcbTEST" type="GOOSE" datSet="TEST" confRev="2"/>
						<GSEControl appID="STAT" name="gcbSTAT" type="GOOSE" datSet="STAT" confRev="1"/>
						<GSEControl appID="CBPOS" name="gcbCBPOS" type="GOOSE" datSet="CBPOS" confRev="1"/>
					</LN0>
					<LN lnClass="LPHD" inst="1" lnType="LPHD_TYPE">
						<DOI name="PhyNam">
							<DAI name="latitude">
								<Val>0.000000</Val>
							</DAI>
							<DAI name="longitude">
								<Val>0.000000</Val>
							</DAI>
							<DAI name="altitude">
								<Val>0.000000</Val>
							</DAI>
						</DOI>
						<DOI name="PhyHealth">
							<DAI name="stVal">
								<Val>Ok</Val>
							</DAI>
						</DOI>
						<DOI name="Proxy">
							<DAI name="stVal">
								<Val>False</Val>
							</DAI>
						</DOI>
					</LN>
					<LN prefix="LS" lnClass="PTRC" inst="1" lnType="PTRC_TYPE">
						<DOI name="NamPlt">
							<DAI name="paramRev">
								<Val>0</Val>
							</DAI>
							<DAI name="valRev">
								<Val>0</Val>
							</DAI>
						</DOI>
						<DOI name="Beh">
							<DAI name="stVal">
								<Val>on</Val>
							</DAI>
						</DOI>
						<DOI name="Health">
							<DAI name="stVal">
								<Val>Ok</Val>
							</DAI>
						</DOI>
						<DOI name="Blk">
							<DAI name="stVal">
								<Val>False</Val>
							</DAI>
						</DOI>
						<DOI name="Mod">
							<SDI name="origin">
								<DAI name="orCat">
									<Val>not-supported</Val>
								</DAI>
							</SDI>
							<DAI name="ctlNum">
								<Val>0</Val>
							</DAI>
							<DAI name="stVal">
								<Val>on</Val>
							</DAI>
							<DAI name="stSeld">
								<Val>False</Val>
							</DAI>
							<DAI name="ctlModel">
								<Val>status-only</Val>
							</DAI>
							<DAI name="sboTimeout">
								<Val>0</Val>
							</DAI>
							<DAI name="sboClass">
								<Val>operate-once</Val>
							</DAI>
							<DAI name="operTimeout">
								<Val>0</Val>
							</DAI>
						</DOI>
						<DOI name="CmdBlk">
							<SDI name="origin">
								<DAI name="orCat">
									<Val>not-supported</Val>
								</DAI>
							</SDI>
							<DAI name="ctlNum">
								<Val>0</Val>
							</DAI>
							<DAI name="stVal">
								<Val>False</Val>
							</DAI>
							<DAI name="stSeld">
								<Val>False</Val>
							</DAI>
							<SDI name="pulseConfig">
								<DAI name="cmdQual">
									<Val>pulse</Val>
								</DAI>
								<DAI name="onDur">
									<Val>0</Val>
								</DAI>
								<DAI name="offDur">
									<Val>0</Val>
								</DAI>
								<DAI name="numPls">
									<Val>0</Val>
								</DAI>
							</SDI>
							<DAI name="ctlModel">
								<Val>status-only</Val>
							</DAI>
							<DAI name="sboTimeout">
								<Val>0</Val>
							</DAI>
							<DAI name="sboClass">
								<Val>operate-once</Val>
							</DAI>
							<DAI name="operTimeout">
								<Val>0</Val>
							</DAI>
						</DOI>
						<DOI name="InRef1">
							<DAI name="tstEna">
								<Val>False</Val>
							</DAI>
						</DOI>
						<DOI name="BlkRef1">
							<DAI name="tstEna">
								<Val>False</Val>
							</DAI>
						</DOI>
						<DOI name="ClcExp">
							<DAI name="stVal">
								<Val>False</Val>
							</DAI>
						</DOI>
						<DOI name="ClcStr">
							<SDI name="origin">
								<DAI name="orCat">
									<Val>not-supported</Val>
								</DAI>
							</SDI>
							<DAI name="ctlNum">
								<Val>0</Val>
							</DAI>
							<DAI name="stVal">
								<Val>False</Val>
							</DAI>
							<DAI name="stSeld">
								<Val>False</Val>
							</DAI>
							<SDI name="pulseConfig">
								<DAI name="cmdQual">
									<Val>pulse</Val>
								</DAI>
								<DAI name="onDur">
									<Val>0</Val>
								</DAI>
								<DAI name="offDur">
									<Val>0</Val>
								</DAI>
								<DAI name="numPls">
									<Val>0</Val>
								</DAI>
							</SDI>
							<DAI name="ctlModel">
								<Val>status-only</Val>
							</DAI>
							<DAI name="sboTimeout">
								<Val>0</Val>
							</DAI>
							<DAI name="sboClass">
								<Val>operate-once</Val>
							</DAI>
							<DAI name="operTimeout">
								<Val>0</Val>
							</DAI>
						</DOI>
						<DOI name="ClcMth">
							<DAI name="setVal">
								<Val>UNSPECIFIED</Val>
							</DAI>
						</DOI>
						<DOI name="ClcMod">
							<DAI name="setVal">
								<Val>TOTAL</Val>
							</DAI>
						</DOI>
						<DOI name="ClcIntvTyp">
							<DAI name="setVal">
								<Val>MS</Val>
							</DAI>
						</DOI>
						<DOI name="ClcIntvPer">
							<DAI name="setVal">
								<Val>0</Val>
							</DAI>
							<DAI name="minVal">
								<Val>0</Val>
							</DAI>
							<DAI name="maxVal">
								<Val>0</Val>
							</DAI>
							<DAI name="stepSize">
								<Val>0</Val>
							</DAI>
							<SDI name="units">
								<DAI name="SIUnit">
									<Val>No Units</Val>
								</DAI>
								<DAI name="multiplier">
									<Val>y</Val>
								</DAI>
							</SDI>
						</DOI>
						<DOI name="NumSubIntv">
							<DAI name="setVal">
								<Val>0</Val>
							</DAI>
							<DAI name="minVal">
								<Val>0</Val>
							</DAI>
							<DAI name="maxVal">
								<Val>0</Val>
							</DAI>
							<DAI name="stepSize">
								<Val>0</Val>
							</DAI>
							<SDI name="units">
								<DAI name="SIUnit">
									<Val>No Units</Val>
								</DAI>
								<DAI name="multiplier">
									<Val>y</Val>
								</DAI>
							</SDI>
						</DOI>
						<DOI name="ClcRfTyp">
							<DAI name="setVal">
								<Val>MS</Val>
							</DAI>
						</DOI>
						<DOI name="ClcRfPer">
							<DAI name="setVal">
								<Val>0</Val>
							</DAI>
							<DAI name="minVal">
								<Val>0</Val>
							</DAI>
							<DAI name="maxVal">
								<Val>0</Val>
							</DAI>
							<DAI name="stepSize">
								<Val>0</Val>
							</DAI>
							<SDI name="units">
								<DAI name="SIUnit">
									<Val>No Units</Val>
								</DAI>
								<DAI name="multiplier">
									<Val>y</Val>
								</DAI>
							</SDI>
						</DOI>
						<DOI name="ClcSrc">
							<DAI name="tstEna">
								<Val>False</Val>
							</DAI>
						</DOI>
						<DOI name="ClcNxTmms">
							<DAI name="setVal">
								<Val>0</Val>
							</DAI>
							<DAI name="minVal">
								<Val>0</Val>
							</DAI>
							<DAI name="maxVal">
								<Val>0</Val>
							</DAI>
							<DAI name="stepSize">
								<Val>0</Val>
							</DAI>
							<SDI name="units">
								<DAI name="SIUnit">
									<Val>No Units</Val>
								</DAI>
								<DAI name="multiplier">
									<Val>y</Val>
								</DAI>
							</SDI>
						</DOI>
						<DOI name="InSyn">
							<DAI name="tstEna">
								<Val>False</Val>
							</DAI>
						</DOI>
						<DOI name="Tr1">
							<DAI name="general">
								<Val>False</Val>
							</DAI>
							<DAI name="phsA">
								<Val>False</Val>
							</DAI>
							<DAI name="phsB">
								<Val>False</Val>
							</DAI>
							<DAI name="phsC">
								<Val>False</Val>
							</DAI>
							<DAI name="neut">
								<Val>False</Val>
							</DAI>
							<SDI name="originSrc">
								<DAI name="orCat">
									<Val>not-supported</Val>
								</DAI>
							</SDI>
						</DOI>
						<DOI name="Op">
							<DAI name="general">
								<Val>False</Val>
							</DAI>
							<DAI name="phsA">
								<Val>False</Val>
							</DAI>
							<DAI name="phsB">
								<Val>False</Val>
							</DAI>
							<DAI name="phsC">
								<Val>False</Val>
							</DAI>
							<DAI name="neut">
								<Val>False</Val>
							</DAI>
							<SDI name="originSrc">
								<DAI name="orCat">
									<Val>not-supported</Val>
								</DAI>
							</SDI>
						</DOI>
						<DOI name="Str">
							<DAI name="general">
								<Val>False</Val>
							</DAI>
							<DAI name="dirGeneral">
								<Val>unknown</Val>
							</DAI>
							<DAI name="phsA">
								<Val>False</Val>
							</DAI>
							<DAI name="dirPhsA">
								<Val>unknown</Val>
							</DAI>
							<DAI name="phsB">
								<Val>False</Val>
							</DAI>
							<DAI name="dirPhsB">
								<Val>unknown</Val>
							</DAI>
							<DAI name="phsC">
								<Val>False</Val>
							</DAI>
							<DAI name="dirPhsC">
								<Val>unknown</Val>
							</DAI>
							<DAI name="neut">
								<Val>False</Val>
							</DAI>
							<DAI name="dirNeut">
								<Val>unknown</Val>
							</DAI>
						</DOI>
						<DOI name="OpCntRs">
							<SDI name="origin">
								<DAI name="orCat">
									<Val>not-supported</Val>
								</DAI>
							</SDI>
							<DAI name="ctlNum">
								<Val>0</Val>
							</DAI>
							<DAI name="stVal">
								<Val>0</Val>
							</DAI>
							<DAI name="stSeld">
								<Val>False</Val>
							</DAI>
							<DAI name="ctlModel">
								<Val>status-only</Val>
							</DAI>
							<DAI name="sboTimeout">
								<Val>0</Val>
							</DAI>
							<DAI name="sboClass">
								<Val>operate-once</Val>
							</DAI>
							<DAI name="minVal">
								<Val>0</Val>
							</DAI>
							<DAI name="maxVal">
								<Val>0</Val>
							</DAI>
							<DAI name="stepSize">
								<Val>0</Val>
							</DAI>
							<DAI name="operTimeout">
								<Val>0</Val>
							</DAI>
							<SDI name="units">
								<DAI name="SIUnit">
									<Val>No Units</Val>
								</DAI>
								<DAI name="multiplier">
									<Val>y</Val>
								</DAI>
							</SDI>
						</DOI>
						<DOI name="TrMod">
							<DAI name="setVal">
								<Val>3 phase tripping</Val>
							</DAI>
						</DOI>
						<DOI name="TrPlsTmms">
							<DAI name="setVal">
								<Val>0</Val>
							</DAI>
							<DAI name="minVal">
								<Val>0</Val>
							</DAI>
							<DAI name="maxVal">
								<Val>0</Val>
							</DAI>
							<DAI name="stepSize">
								<Val>0</Val>
							</DAI>
							<SDI name="units">
								<DAI name="SIUnit">
									<Val>No Units</Val>
								</DAI>
								<DAI name="multiplier">
									<Val>y</Val>
								</DAI>
							</SDI>
						</DOI>
					</LN>
					<LN lnClass="XCBR" inst="1" lnType="XCBR_TYPE">
						<DOI name="Beh">
							<DAI name="stVal">
								<Val>on</Val>
							</DAI>
						</DOI>
						<DOI name="Loc">
							<DAI name="stVal">
								<Val>False</Val>
							</DAI>
						</DOI>
						<DOI name="OpCnt">
							<DAI name="stVal">
								<Val>0</Val>
							</DAI>
						</DOI>
						<DOI name="Pos">
							<DAI name="stVal">
								<Val>intermediate-state</Val>
							</DAI>
							<DAI name="ctlModel">
								<Val>status-only</Val>
							</DAI>
						</DOI>
						<DOI name="BlkOpn">
							<DAI name="ctlModel">
								<Val>status-only</Val>
							</DAI>
						</DOI>
						<DOI name="BlkCls">
							<DAI name="ctlModel">
								<Val>status-only</Val>
							</DAI>
						</DOI>
					</LN>
				</LDevice>
				<LDevice inst="1">
					<LN0 lnType="LLN0_TYPE" lnClass="LLN0" inst="">
						<DOI name="Beh">
							<DAI name="stVal">
								<Val>on</Val>
							</DAI>
						</DOI>
					</LN0>
					<LN lnClass="LPHD" inst="1" lnType="LPHD_TYPE1">
						<DOI name="PhyHealth">
							<DAI name="stVal">
								<Val>Ok</Val>
							</DAI>
						</DOI>
						<DOI name="Proxy">
							<DAI name="stVal">
								<Val>False</Val>
							</DAI>
						</DOI>
					</LN>
					<LN lnClass="MMXU" inst="1" lnType="MMXU_TYPE">
						<DOI name="Beh">
							<DAI name="stVal">
								<Val>on</Val>
							</DAI>
						</DOI>
						<DOI name="W">
							<SDI name="phsA">
								<SDI name="cVal">
									<SDI name="mag">
										<DAI name="f">
											<Val>0.000000</Val>
										</DAI>
									</SDI>
								</SDI>
							</SDI>
							<SDI name="phsB">
								<SDI name="cVal">
									<SDI name="mag">
										<DAI name="f">
											<Val>0.000000</Val>
										</DAI>
									</SDI>
								</SDI>
							</SDI>
							<SDI name="phsC">
								<SDI name="cVal">
									<SDI name="mag">
										<DAI name="f">
											<Val>0.000000</Val>
										</DAI>
									</SDI>
								</SDI>
							</SDI>
						</DOI>
					</LN>
				</LDevice>
			</Server>
		</AccessPoint>
	</IED>
	<IED name="IED" originalSclRevision="B" originalSclVersion="2007">
		<Services>
			<GOOSE max="10"/>
			<GetDirectory/>
			<DataObjectDirectory/>
			<GetDataSetValue/>
			<SetDataSetValue/>
			<DataSetDirectory/>
		</Services>
		<AccessPoint name="AP">
			<Server>
				<Authentication/>
				<LDevice inst="0">
					<LN0 lnType="LLN0_TYPE" lnClass="LLN0" inst="">
						<DataSet name="MEAS">
							<FCDA ldInst="0" lnClass="MMXU" lnInst="1" doName="W" fc="MX"/>
						</DataSet>
						<DataSet name="STRUCT">
							<FCDA ldInst="0" lnClass="MMXU" lnInst="1" doName="Beh" fc="ST"/>
							<FCDA ldInst="0" lnClass="PTRC" lnInst="1" doName="Beh" fc="ST"/>
						</DataSet>
						<DOI name="Beh">
							<DAI name="stVal">
								<Val>on</Val>
							</DAI>
						</DOI>
						<GSEControl appID="MEAS" name="gcbMEAS" type="GOOSE" datSet="MEAS" confRev="1"/>
						<GSEControl appID="STRUCT" name="gcbSTRUCT" type="GOOSE" datSet="STRUCT" confRev="1"/>
					</LN0>
					<LN lnClass="LPHD" inst="1" lnType="LPHD_TYPE1">
						<DOI name="PhyHealth">
							<DAI name="stVal">
								<Val>Ok</Val>
							</DAI>
						</DOI>
						<DOI name="Proxy">
							<DAI name="stVal">
								<Val>False</Val>
							</DAI>
						</DOI>
					</LN>
					<LN lnClass="MMXU" inst="1" lnType="MMXU_TYPE">
						<DOI name="Beh">
							<DAI name="stVal">
								<Val>on</Val>
							</DAI>
						</DOI>
						<DOI name="W">
							<SDI name="phsA">
								<SDI name="cVal">
									<SDI name="mag">
										<DAI name="f">
											<Val>0.000000</Val>
										</DAI>
									</SDI>
								</SDI>
							</SDI>
							<SDI name="phsB">
								<SDI name="cVal">
									<SDI name="mag">
										<DAI name="f">
											<Val>0.000000</Val>
										</DAI>
									</SDI>
								</SDI>
							</SDI>
							<SDI name="phsC">
								<SDI name="cVal">
									<SDI name="mag">
										<DAI name="f">
											<Val>0.000000</Val>
										</DAI>
									</SDI>
								</SDI>
							</SDI>
						</DOI>
					</LN>
					<LN lnClass="PTRC" inst="1" lnType="PTRC_TYPE1"/>
				</LDevice>
			</Server>
		</AccessPoint>
	</IED>
	<DataTypeTemplates>
		<LNodeType id="LLN0_TYPE" lnClass="LLN0">
			<DO name="Beh" type="ENS1"/>
		</LNodeType>
		<LNodeType id="LPHD_TYPE" lnClass="LPHD">
			<DO name="PhyNam" type="DPL"/>
			<DO name="PhyHealth" type="ENS2"/>
			<DO name="Proxy" type="SPS"/>
		</LNodeType>
		<LNodeType id="PTRC_TYPE" lnClass="PTRC">
			<DO name="NamPlt" type="LPL"/>
			<DO name="Beh" type="ENS11"/>
			<DO name="Health" type="ENS2"/>
			<DO name="Blk" type="SPS"/>
			<DO name="Mod" type="ENC1"/>
			<DO name="CmdBlk" type="SPC1"/>
			<DO name="InRef1" type="ORG"/>
			<DO name="BlkRef1" type="ORG"/>
			<DO name="ClcExp" type="SPS"/>
			<DO name="ClcStr" type="SPC1"/>
			<DO name="ClcMth" type="ENG1"/>
			<DO name="ClcMod" type="ENG2"/>
			<DO name="ClcIntvTyp" type="ENG"/>
			<DO name="ClcIntvPer" type="ING"/>
			<DO name="NumSubIntv" type="ING"/>
			<DO name="ClcRfTyp" type="ENG"/>
			<DO name="ClcRfPer" type="ING"/>
			<DO name="ClcSrc" type="ORG"/>
			<DO name="ClcNxTmms" type="ING"/>
			<DO name="InSyn" type="ORG"/>
			<DO name="Tr1" type="ACT"/>
			<DO name="Op" type="ACT"/>
			<DO name="Str" type="ACD"/>
			<DO name="OpCntRs" type="INC"/>
			<DO name="TrMod" type="ENG4"/>
			<DO name="TrPlsTmms" type="ING"/>
		</LNodeType>
		<LNodeType id="XCBR_TYPE" lnClass="XCBR">
			<DO name="Beh" type="ENS1"/>
			<DO name="Loc" type="SPS1"/>
			<DO name="OpCnt" type="INS1"/>
			<DO name="Pos" type="DPC"/>
			<DO name="BlkOpn" type="SPC2"/>
			<DO name="BlkCls" type="SPC2"/>
		</LNodeType>
		<LNodeType id="LPHD_TYPE1" lnClass="LPHD">
			<DO name="PhyNam" type="DPL1"/>
			<DO name="PhyHealth" type="ENS"/>
			<DO name="Proxy" type="SPS1"/>
		</LNodeType>
		<LNodeType id="MMXU_TYPE" lnClass="MMXU">
			<DO name="Beh" type="ENS11"/>
			<DO name="W" type="WYE"/>
		</LNodeType>
		<LNodeType id="PTRC_TYPE1" lnClass="PTRC">
			<DO name="Beh" type="ENS1"/>
		</LNodeType>
		<DOType id="ENS1" cdc="ENS">
			<DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" dchg="true" dupd="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
		</DOType>
		<DOType id="DPL" cdc="DPL">
			<DA name="vendor" bType="VisString255" fc="DC"/>
			<DA name="hwRev" bType="VisString255" fc="DC"/>
			<DA name="swRev" bType="VisString255" fc="DC"/>
			<DA name="serNum" bType="VisString255" fc="DC"/>
			<DA name="model" bType="VisString255" fc="DC"/>
			<DA name="location" bType="VisString255" fc="DC"/>
			<DA name="name" bType="VisString64" fc="DC"/>
			<DA name="owner" bType="VisString255" fc="DC"/>
			<DA name="ePSName" bType="VisString255" fc="DC"/>
			<DA name="primeOper" bType="VisString255" fc="DC"/>
			<DA name="secondOper" bType="VisString255" fc="DC"/>
			<DA name="latitude" bType="FLOAT32" fc="DC"/>
			<DA name="longitude" bType="FLOAT32" fc="DC"/>
			<DA name="altitude" bType="FLOAT32" fc="DC"/>
			<DA name="mRID" bType="VisString255" fc="DC"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="ENS2" cdc="ENS">
			<DA name="stVal" bType="Enum" type="HealthKind" fc="ST" dchg="true" dupd="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
			<DA name="subEna" bType="BOOLEAN" fc="SV"/>
			<DA name="subVal" bType="Enum" type="HealthKind" fc="SV"/>
			<DA name="subQ" bType="Quality" fc="SV"/>
			<DA name="subID" bType="VisString64" fc="SV"/>
			<DA name="blkEna" bType="BOOLEAN" fc="BL"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="SPS" cdc="SPS">
			<DA name="stVal" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
			<DA name="subEna" bType="BOOLEAN" fc="SV"/>
			<DA name="subVal" bType="BOOLEAN" fc="SV"/>
			<DA name="subQ" bType="Quality" fc="SV"/>
			<DA name="subID" bType="VisString64" fc="SV"/>
			<DA name="blkEna" bType="BOOLEAN" fc="BL"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="LPL" cdc="LPL">
			<DA name="vendor" bType="VisString255" fc="DC"/>
			<DA name="swRev" bType="VisString255" fc="DC"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="configRev" bType="VisString255" fc="DC"/>
			<DA name="paramRev" bType="INT32" fc="ST" dchg="true"/>
			<DA name="valRev" bType="INT32" fc="ST" dchg="true"/>
			<DA name="ldNs" bType="VisString255" fc="EX"/>
			<DA name="lnNs" bType="VisString255" fc="EX"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="ENS11" cdc="ENS">
			<DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" dchg="true" dupd="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
			<DA name="subEna" bType="BOOLEAN" fc="SV"/>
			<DA name="subVal" bType="Enum" type="BehaviourModeKind" fc="SV"/>
			<DA name="subQ" bType="Quality" fc="SV"/>
			<DA name="subID" bType="VisString64" fc="SV"/>
			<DA name="blkEna" bType="BOOLEAN" fc="BL"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="ENC1" cdc="ENC">
			<DA name="origin" bType="Struct" type="Originator" fc="ST"/>
			<DA name="ctlNum" bType="INT8U" fc="ST"/>
			<DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" dchg="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
			<DA name="stSeld" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="opRcvd" bType="BOOLEAN" fc="OR" dchg="true"/>
			<DA name="opOk" bType="BOOLEAN" fc="OR" dchg="true"/>
			<DA name="tOpOk" bType="Timestamp" fc="OR"/>
			<DA name="subEna" bType="BOOLEAN" fc="SV"/>
			<DA name="subVal" bType="Enum" type="BehaviourModeKind" fc="SV"/>
			<DA name="subQ" bType="Quality" fc="SV"/>
			<DA name="subID" bType="VisString64" fc="SV"/>
			<DA name="blkEna" bType="BOOLEAN" fc="BL"/>
			<DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" dchg="true"/>
			<DA name="sboTimeout" bType="INT32U" fc="CF" dchg="true"/>
			<DA name="sboClass" bType="Enum" type="SboClassKind" fc="CF" dchg="true"/>
			<DA name="operTimeout" bType="INT32U" fc="CF" dchg="true"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
			<DA name="SBO" bType="VisString129" fc="CO"/>
			<DA name="SBOw" bType="Struct" type="SBOwEnum1" fc="CO"/>
			<DA name="Oper" bType="Struct" type="SBOwEnum1" fc="CO"/>
			<DA name="Cancel" bType="Struct" type="CancelEnum1" fc="CO"/>
		</DOType>
		<DOType id="SPC1" cdc="SPC">
			<DA name="origin" bType="Struct" type="Originator" fc="ST"/>
			<DA name="ctlNum" bType="INT8U" fc="ST"/>
			<DA name="stVal" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
			<DA name="stSeld" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="opRcvd" bType="BOOLEAN" fc="OR" dchg="true"/>
			<DA name="opOk" bType="BOOLEAN" fc="OR" dchg="true"/>
			<DA name="tOpOk" bType="Timestamp" fc="OR"/>
			<DA name="subEna" bType="BOOLEAN" fc="SV"/>
			<DA name="subVal" bType="BOOLEAN" fc="SV"/>
			<DA name="subQ" bType="Quality" fc="SV"/>
			<DA name="subID" bType="VisString64" fc="SV"/>
			<DA name="blkEna" bType="BOOLEAN" fc="BL"/>
			<DA name="pulseConfig" bType="Struct" type="PulseConfig" fc="CF" dchg="true"/>
			<DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" dchg="true"/>
			<DA name="sboTimeout" bType="INT32U" fc="CF" dchg="true"/>
			<DA name="sboClass" bType="Enum" type="SboClassKind" fc="CF" dchg="true"/>
			<DA name="operTimeout" bType="INT32U" fc="CF" dchg="true"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
			<DA name="SBO" bType="VisString129" fc="CO"/>
			<DA name="SBOw" bType="Struct" type="SBOwBOOLEAN1" fc="CO"/>
			<DA name="Oper" bType="Struct" type="SBOwBOOLEAN1" fc="CO"/>
			<DA name="Cancel" bType="Struct" type="CancelBOOLEAN1" fc="CO"/>
		</DOType>
		<DOType id="ORG" cdc="ORG">
			<DA name="setSrcRef" bType="VisString129" fc="SP" dchg="true"/>
			<DA name="setTstRef" bType="VisString129" fc="SP" dchg="true"/>
			<DA name="setSrcCB" bType="VisString129" fc="SP" dchg="true"/>
			<DA name="setTstCB" bType="VisString129" fc="SP" dchg="true"/>
			<DA name="intAddr" bType="VisString255" fc="SP" dchg="true"/>
			<DA name="tstEna" bType="BOOLEAN" fc="SP" dchg="true"/>
			<DA name="purpose" bType="VisString255" fc="DC"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="ENG1" cdc="ENG">
			<DA name="setVal" bType="Enum" type="CalcMethodKind" fc="SP" dchg="true"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="ENG2" cdc="ENG">
			<DA name="setVal" bType="Enum" type="CalcModeKind" fc="SP" dchg="true"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="ENG" cdc="ENG">
			<DA name="setVal" bType="Enum" type="CalcIntervalKind" fc="SP" dchg="true"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="ING" cdc="ING">
			<DA name="setVal" bType="INT32" fc="SP" dchg="true"/>
			<DA name="minVal" bType="INT32" fc="CF" dchg="true"/>
			<DA name="maxVal" bType="INT32" fc="CF" dchg="true"/>
			<DA name="stepSize" bType="INT32U" fc="CF" dchg="true"/>
			<DA name="units" bType="Struct" type="Unit" fc="CF" dchg="true"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="ACT" cdc="ACT">
			<DA name="general" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="phsA" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="phsB" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="phsC" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="neut" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
			<DA name="originSrc" bType="Struct" type="Originator" fc="ST"/>
			<DA name="operTmPhsA" bType="Timestamp" fc="ST"/>
			<DA name="operTmPhsB" bType="Timestamp" fc="ST"/>
			<DA name="operTmPhsC" bType="Timestamp" fc="ST"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="ACD" cdc="ACD">
			<DA name="general" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" dchg="true"/>
			<DA name="phsA" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="dirPhsA" bType="Enum" type="PhaseFaultDirectionKind" fc="ST" dchg="true"/>
			<DA name="phsB" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="dirPhsB" bType="Enum" type="PhaseFaultDirectionKind" fc="ST" dchg="true"/>
			<DA name="phsC" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="dirPhsC" bType="Enum" type="PhaseFaultDirectionKind" fc="ST" dchg="true"/>
			<DA name="neut" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="dirNeut" bType="Enum" type="PhaseFaultDirectionKind" fc="ST" dchg="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="INC" cdc="INC">
			<DA name="origin" bType="Struct" type="Originator" fc="ST"/>
			<DA name="ctlNum" bType="INT8U" fc="ST"/>
			<DA name="stVal" bType="INT32" fc="ST" dchg="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
			<DA name="stSeld" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="opRcvd" bType="BOOLEAN" fc="OR" dchg="true"/>
			<DA name="opOk" bType="BOOLEAN" fc="OR" dchg="true"/>
			<DA name="tOpOk" bType="Timestamp" fc="OR"/>
			<DA name="subEna" bType="BOOLEAN" fc="SV"/>
			<DA name="subVal" bType="INT32" fc="SV"/>
			<DA name="subQ" bType="Quality" fc="SV"/>
			<DA name="subID" bType="VisString64" fc="SV"/>
			<DA name="blkEna" bType="BOOLEAN" fc="BL"/>
			<DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" dchg="true"/>
			<DA name="sboTimeout" bType="INT32U" fc="CF" dchg="true"/>
			<DA name="sboClass" bType="Enum" type="SboClassKind" fc="CF" dchg="true"/>
			<DA name="minVal" bType="INT32" fc="CF" dchg="true"/>
			<DA name="maxVal" bType="INT32" fc="CF" dchg="true"/>
			<DA name="stepSize" bType="INT32U" fc="CF" dchg="true"/>
			<DA name="operTimeout" bType="INT32U" fc="CF" dchg="true"/>
			<DA name="units" bType="Struct" type="Unit" fc="CF" dchg="true"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
			<DA name="SBO" bType="VisString129" fc="CO"/>
			<DA name="SBOw" bType="Struct" type="SBOwINT32" fc="CO"/>
			<DA name="Oper" bType="Struct" type="SBOwINT32" fc="CO"/>
			<DA name="Cancel" bType="Struct" type="CancelINT32" fc="CO"/>
		</DOType>
		<DOType id="ENG4" cdc="ENG">
			<DA name="setVal" bType="Enum" type="TripModeKind" fc="SP" dchg="true"/>
			<DA name="d" bType="VisString255" fc="DC"/>
			<DA name="dU" bType="Unicode255" fc="DC"/>
			<DA name="cdcNs" bType="VisString255" fc="EX"/>
			<DA name="cdcName" bType="VisString255" fc="EX"/>
			<DA name="dataNs" bType="VisString255" fc="EX"/>
		</DOType>
		<DOType id="SPS1" cdc="SPS">
			<DA name="stVal" bType="BOOLEAN" fc="ST" dchg="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
		</DOType>
		<DOType id="INS1" cdc="INS">
			<DA name="stVal" bType="INT32" fc="ST" dchg="true" dupd="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
		</DOType>
		<DOType id="DPC" cdc="DPC">
			<DA name="stVal" bType="Dbpos" fc="ST" dchg="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
			<DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" dchg="true"/>
		</DOType>
		<DOType id="SPC2" cdc="SPC">
			<DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" dchg="true"/>
		</DOType>
		<DOType id="DPL1" cdc="DPL">
			<DA name="vendor" bType="VisString255" fc="DC"/>
		</DOType>
		<DOType id="ENS" cdc="ENS">
			<DA name="stVal" bType="Enum" type="HealthKind" fc="ST" dchg="true" dupd="true"/>
			<DA name="q" bType="Quality" fc="ST" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="ST"/>
		</DOType>
		<DOType id="CMV" cdc="CMV">
			<DA name="cVal" bType="Struct" type="Vector" fc="MX" dchg="true" dupd="true"/>
			<DA name="q" bType="Quality" fc="MX" qchg="true"/>
			<DA name="t" bType="Timestamp" fc="MX"/>
		</DOType>
		<DOType id="WYE" cdc="WYE">
			<SDO name="phsA" type="CMV"/>
			<SDO name="phsB" type="CMV"/>
			<SDO name="phsC" type="CMV"/>
		</DOType>
		<DAType id="Originator">
			<BDA name="orCat" bType="Enum" type="OriginatorCategoryKind"/>
			<BDA name="orIdent" bType="Octet64"/>
		</DAType>
		<DAType id="SBOwEnum1">
			<BDA name="ctlVal" bType="Enum" type="BehaviourModeKind"/>
			<BDA name="operTm" bType="Timestamp"/>
			<BDA name="origin" bType="Struct" type="Originator"/>
			<BDA name="ctlNum" bType="INT8U"/>
			<BDA name="T" bType="Timestamp"/>
			<BDA name="Test" bType="BOOLEAN"/>
			<BDA name="Check" bType="Check"/>
		</DAType>
		<DAType id="CancelEnum1">
			<BDA name="ctlVal" bType="Enum" type="BehaviourModeKind"/>
			<BDA name="operTm" bType="Timestamp"/>
			<BDA name="origin" bType="Struct" type="Originator"/>
			<BDA name="ctlNum" bType="INT8U"/>
			<BDA name="T" bType="Timestamp"/>
			<BDA name="Test" bType="BOOLEAN"/>
		</DAType>
		<DAType id="PulseConfig">
			<BDA name="cmdQual" bType="Enum" type="ControlOutputKind"/>
			<BDA name="onDur" bType="INT32U"/>
			<BDA name="offDur" bType="INT32U"/>
			<BDA name="numPls" bType="INT32U"/>
		</DAType>
		<DAType id="SBOwBOOLEAN1">
			<BDA name="ctlVal" bType="BOOLEAN"/>
			<BDA name="operTm" bType="Timestamp"/>
			<BDA name="origin" bType="Struct" type="Originator"/>
			<BDA name="ctlNum" bType="INT8U"/>
			<BDA name="T" bType="Timestamp"/>
			<BDA name="Test" bType="BOOLEAN"/>
			<BDA name="Check" bType="Check"/>
		</DAType>
		<DAType id="CancelBOOLEAN1">
			<BDA name="ctlVal" bType="BOOLEAN"/>
			<BDA name="operTm" bType="Timestamp"/>
			<BDA name="origin" bType="Struct" type="Originator"/>
			<BDA name="ctlNum" bType="INT8U"/>
			<BDA name="T" bType="Timestamp"/>
			<BDA name="Test" bType="BOOLEAN"/>
		</DAType>
		<DAType id="Unit">
			<BDA name="SIUnit" bType="Enum" type="SIUnitKind"/>
			<BDA name="multiplier" bType="Enum" type="MultiplierKind"/>
		</DAType>
		<DAType id="SBOwINT32">
			<BDA name="ctlVal" bType="INT32"/>
			<BDA name="operTm" bType="Timestamp"/>
			<BDA name="origin" bType="Struct" type="Originator"/>
			<BDA name="ctlNum" bType="INT8U"/>
			<BDA name="T" bType="Timestamp"/>
			<BDA name="Test" bType="BOOLEAN"/>
			<BDA name="Check" bType="Check"/>
		</DAType>
		<DAType id="CancelINT32">
			<BDA name="ctlVal" bType="INT32"/>
			<BDA name="operTm" bType="Timestamp"/>
			<BDA name="origin" bType="Struct" type="Originator"/>
			<BDA name="ctlNum" bType="INT8U"/>
			<BDA name="T" bType="Timestamp"/>
			<BDA name="Test" bType="BOOLEAN"/>
		</DAType>
		<DAType id="AnalogueValue">
			<BDA name="f" bType="FLOAT32"/>
		</DAType>
		<DAType id="Vector">
			<BDA name="mag" bType="Struct" type="AnalogueValue"/>
		</DAType>
		<EnumType id="BehaviourModeKind">
			<EnumVal ord="1">on</EnumVal>
			<EnumVal ord="2">blocked</EnumVal>
			<EnumVal ord="3">test</EnumVal>
			<EnumVal ord="4">test/blocked</EnumVal>
			<EnumVal ord="5">off</EnumVal>
		</EnumType>
		<EnumType id="HealthKind">
			<EnumVal ord="1">Ok</EnumVal>
			<EnumVal ord="2">Warning</EnumVal>
			<EnumVal ord="3">Alarm</EnumVal>
		</EnumType>
		<EnumType id="CtlModelKind">
			<EnumVal ord="0">status-only</EnumVal>
			<EnumVal ord="1">direct-with-normal-security</EnumVal>
			<EnumVal ord="2">sbo-with-normal-security</EnumVal>
			<EnumVal ord="3">direct-with-enhanced-security</EnumVal>
			<EnumVal ord="4">sbo-with-enhanced-security</EnumVal>
		</EnumType>
		<EnumType id="SboClassKind">
			<EnumVal ord="0">operate-once</EnumVal>
			<EnumVal ord="1">operate-many</EnumVal>
		</EnumType>
		<EnumType id="CalcMethodKind">
			<EnumVal ord="1">UNSPECIFIED</EnumVal>
			<EnumVal ord="2">TRUE_RMS</EnumVal>
			<EnumVal ord="3">PEAK_FUNDAMENTAL</EnumVal>
			<EnumVal ord="4">RMS_FUNDAMENTAL</EnumVal>
			<EnumVal ord="5">MIN</EnumVal>
			<EnumVal ord="6">MAX</EnumVal>
			<EnumVal ord="7">AVG</EnumVal>
			<EnumVal ord="8">SDV</EnumVal>
			<EnumVal ord="9">PREDICTION</EnumVal>
			<EnumVal ord="10">RATE</EnumVal>
		</EnumType>
		<EnumType id="CalcModeKind">
			<EnumVal ord="1">TOTAL</EnumVal>
			<EnumVal ord="2">PERIOD</EnumVal>
			<EnumVal ord="3">SLIDING</EnumVal>
		</EnumType>
		<EnumType id="CalcIntervalKind">
			<EnumVal ord="1">MS</EnumVal>
			<EnumVal ord="2">PER_CYCLE</EnumVal>
			<EnumVal ord="3">CYCLE</EnumVal>
			<EnumVal ord="4">DAY</EnumVal>
			<EnumVal ord="5">WEEK</EnumVal>
			<EnumVal ord="6">MONTH</EnumVal>
			<EnumVal ord="7">YEAR</EnumVal>
			<EnumVal ord="8">EXTERNAL</EnumVal>
		</EnumType>
		<EnumType id="FaultDirectionKind">
			<EnumVal ord="0">unknown</EnumVal>
			<EnumVal ord="1">forward</EnumVal>
			<EnumVal ord="2">backward</EnumVal>
			<EnumVal ord="3">both</EnumVal>
		</EnumType>
		<EnumType id="PhaseFaultDirectionKind">
			<EnumVal ord="0">unknown</EnumVal>
			<EnumVal ord="1">forward</EnumVal>
			<EnumVal ord="2">backward</EnumVal>
		</EnumType>
		<EnumType id="TripModeKind">
			<EnumVal ord="1">3 phase tripping</EnumVal>
			<EnumVal ord="2">1 or 3 phase tripping</EnumVal>
			<EnumVal ord="3">specific</EnumVal>
			<EnumVal ord="4">1 phase tripping</EnumVal>
		</EnumType>
		<EnumType id="OriginatorCategoryKind">
			<EnumVal ord="0">not-supported</EnumVal>
			<EnumVal ord="1">bay-control</EnumVal>
			<EnumVal ord="2">station-control</EnumVal>
			<EnumVal ord="3">remote-control</EnumVal>
			<EnumVal ord="4">automatic-bay</EnumVal>
			<EnumVal ord="5">automatic-station</EnumVal>
			<EnumVal ord="6">automatic-remote</EnumVal>
			<EnumVal ord="7">maintenance</EnumVal>
			<EnumVal ord="8">process</EnumVal>
		</EnumType>
		<EnumType id="ControlOutputKind">
			<EnumVal ord="0">pulse</EnumVal>
			<EnumVal ord="1">persistent</EnumVal>
		</EnumType>
		<EnumType id="SIUnitKind">
			<EnumVal ord="1">No Units</EnumVal>
			<EnumVal ord="2">m</EnumVal>
			<EnumVal ord="3">kg</EnumVal>
			<EnumVal ord="4">s</EnumVal>
			<EnumVal ord="5">A</EnumVal>
			<EnumVal ord="6">K</EnumVal>
			<EnumVal ord="7">mol</EnumVal>
			<EnumVal ord="8">cd</EnumVal>
			<EnumVal ord="9">deg</EnumVal>
			<EnumVal ord="10">rad</EnumVal>
			<EnumVal ord="11">sr</EnumVal>
			<EnumVal ord="21">Gy</EnumVal>
			<EnumVal ord="22">Bq</EnumVal>
			<EnumVal ord="23">°C</EnumVal>
			<EnumVal ord="24">Sv</EnumVal>
			<EnumVal ord="25">F</EnumVal>
			<EnumVal ord="26">C</EnumVal>
			<EnumVal ord="27">S</EnumVal>
			<EnumVal ord="28">H</EnumVal>
			<EnumVal ord="29">V</EnumVal>
			<EnumVal ord="30">ohm</EnumVal>
			<EnumVal ord="31">J</EnumVal>
			<EnumVal ord="32">N</EnumVal>
			<EnumVal ord="33">Hz</EnumVal>
			<EnumVal ord="34">lx</EnumVal>
			<EnumVal ord="35">Lm</EnumVal>
			<EnumVal ord="36">Wb</EnumVal>
			<EnumVal ord="37">T</EnumVal>
			<EnumVal ord="38">W</EnumVal>
			<EnumVal ord="39">Pa</EnumVal>
			<EnumVal ord="41">m²</EnumVal>
			<EnumVal ord="42">m³</EnumVal>
			<EnumVal ord="43">m/s</EnumVal>
			<EnumVal ord="44">m/s²</EnumVal>
			<EnumVal ord="45">m³/s</EnumVal>
			<EnumVal ord="46">m/m³</EnumVal>
			<EnumVal ord="47">M</EnumVal>
			<EnumVal ord="48">kg/m³</EnumVal>
			<EnumVal ord="49">m²/s</EnumVal>
			<EnumVal ord="50">W/m K</EnumVal>
			<EnumVal ord="51">J/K</EnumVal>
			<EnumVal ord="52">ppm</EnumVal>
			<EnumVal ord="53">1/s</EnumVal>
			<EnumVal ord="54">rad/s</EnumVal>
			<EnumVal ord="61">VA</EnumVal>
			<EnumVal ord="62">Watts</EnumVal>
			<EnumVal ord="63">VAr</EnumVal>
			<EnumVal ord="64">phi</EnumVal>
			<EnumVal ord="65">cos(phi)</EnumVal>
			<EnumVal ord="66">Vs</EnumVal>
			<EnumVal ord="67">V²</EnumVal>
			<EnumVal ord="68">As</EnumVal>
			<EnumVal ord="69">A²</EnumVal>
			<EnumVal ord="70">A²t</EnumVal>
			<EnumVal ord="71">VAh</EnumVal>
			<EnumVal ord="72">Wh</EnumVal>
			<EnumVal ord="73">VArh</EnumVal>
			<EnumVal ord="74">V/Hz</EnumVal>
			<EnumVal ord="75">Hz/s</EnumVal>
			<EnumVal ord="76">char</EnumVal>
			<EnumVal ord="77">char/s</EnumVal>
			<EnumVal ord="78">kgm²</EnumVal>
			<EnumVal ord="79">dB</EnumVal>
			<EnumVal ord="80">J/Wh</EnumVal>
			<EnumVal ord="81">W/s</EnumVal>
			<EnumVal ord="82">l/s</EnumVal>
			<EnumVal ord="83">dBm</EnumVal>
		</EnumType>
		<EnumType id="MultiplierKind">
			<EnumVal ord="-24">y</EnumVal>
			<EnumVal ord="-21">z</EnumVal>
			<EnumVal ord="-18">a</EnumVal>
			<EnumVal ord="-15">f</EnumVal>
			<EnumVal ord="-12">p</EnumVal>
			<EnumVal ord="-9">n</EnumVal>
			<EnumVal ord="-6">µ</EnumVal>
			<EnumVal ord="-3">m</EnumVal>
			<EnumVal ord="-2">c</EnumVal>
			<EnumVal ord="-1">d</EnumVal>
			<EnumVal ord="0">No Multiplier</EnumVal>
			<EnumVal ord="1">da</EnumVal>
			<EnumVal ord="2">h</EnumVal>
			<EnumVal ord="3">k</EnumVal>
			<EnumVal ord="6">M</EnumVal>
			<EnumVal ord="9">G</EnumVal>
			<EnumVal ord="12">T</EnumVal>
			<EnumVal ord="15">P</EnumVal>
			<EnumVal ord="18">E</EnumVal>
			<EnumVal ord="21">Z</EnumVal>
			<EnumVal ord="24">Y</EnumVal>
		</EnumType>
	</DataTypeTemplates>
</SCL>
