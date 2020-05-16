# hoomaluo_PM001-ADE9000

Most of the source code within this library is based on the library developed by Analog Devices for its Evaluation Board [EVAL-ADE9000-Shield](https://www.analog.com/en/design-center/evaluation-hardware-and-software/evaluation-boards-kits/EVAL-ADE9000-Shield.html) but with a proper connection, can be used too with the [EVAL-ADE9000](https://www.analog.com/en/design-center/evaluation-hardware-and-software/evaluation-boards-kits/EVAL-ADE9000.html) or in general with any [ADE9000](https://www.analog.com/en/products/ADE9000.html) development.

## PRODUCT INFORMATION

This breakout board uses the ADE9000 power monitoring chip which uses SPI interface. This board is compatible with 32-bit microcontrollers such as the Maple Mini, ESP8266, and the Arduino Zero or Due. This particular tutorial will use a Maple Mini as the primary microcontroller, but you should be able to adapt it to any of these other 32-bit microcontrollers using a similar approach.

## DESCRIPTION OF PRODUCT FROM ANALOG DEVICES

The ADE9000 is a highly accurate, fully integrated, multiphase energy and power quality monitoring device. Superior analog performance and a digital signal processing (DSP) core enable accurate energy monitoring over a wide dynamic range. An integrated high end reference ensures low drift over temperature with a combined drift of less than ±25 ppm/°C maximum for the entire channel including a programmable gain amplifier (PGA) and an analog-to-digital converter (ADC).

The ADE9000 offers complete power monitoring capability by providing total as well as fundamental measurements on rms, active, reactive, and apparent powers and energies. Advanced features such as dip and swell monitoring, frequency, phase angle, voltage total harmonic distortion (VTHD), current total harmonic distortion (ITHD), and power factor measurements enable implementation of power quality measurements. The ½ cycle rms and 10 cycle rms/12 cycle rms, calculated according to IEC 61000-4-30 Class S, provide instantaneous rms measurements for real-time monitoring.

The ADE9000 offers an integrated flexible waveform buffer that stores samples at a fixed data rate of 32 kSPS or 8 kSPS, or a sampling rate that varies based on line frequency to ensure 128 points per line cycle. Resampling simplifies fast Fourier transform (FFT) calculation of at least 50 harmonics in an external processor.

The ADE9000 simplifies the implementation of energy and power quality monitoring systems by providing tight integration of acquisition and calculation engines. The integrated ADCs and DSP engine calculate various parameters and provide data through user accessible registers or indicate events through interrupt pins. With seven dedicated ADC channels, the ADE9000 can be used on a 3-phase system or up to three single-phase systems. It supports current transformers (CTs) or Rogowski coils for current measurements. A digital integrator eliminates a discrete integrator required for Rogowski coils.

The ADE9000 absorbs most complexity in calculations for a power monitoring system. With a simple host microcontroller, the ADE9000 enables the design of standalone monitoring or protection systems, or low cost nodes uploading data into the cloud.
