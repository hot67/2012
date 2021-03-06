	#include "WPILib.h"
	#include "Math.h"
	
	class DrvStraightPID: public PIDOutput
	{
		public:
			DrvStraightPID(RobotDrive *m_robotDrive,Encoder *m_Encoder1, Encoder *m_Encoder2);
			void PIDWrite(float output);
		private:
			RobotDrive *m_robotDrive;
			Encoder *m_Encoder1;
			Encoder *m_Encoder2;
			float output;
			float comp_spd;
	};
