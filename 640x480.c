/*
Request		Notes
01			Def out, nothing comes back

These seem related
0B			Always same back (ack?)
0A			Three bytes back

Presumably these write to an FX2 on chip register
	reg_w()
	Does bulk setup
	Orig: 0x0A
	Switched to 0x0B

	reg_r()
	Orig: 0x0B
	Switched to 0x0A


i2c_w() => ovfx2_i2c_w()
Orig: 0x02
Switched to 0x01

i2c_r() => ovfx2_i2c_r()
Orig: 0x03
Switched to 0x02 on loose grounds


OVFX2 I2C address should be 0 or maybe the driver sets this and we could chose whatever
Does that line up with I2C writes?
*/


/*
Generated by uvusbreplay 0.1
uvusbreplay copyright 2011 John McMaster <JohnDMcMaster@gmail.com>
Date: 11/01/11 20:51:56.
Source data: 640x480_reg.cap
Source range: 5 - 86
*/
int n_rw = 0;
char buff[64];
//Generated from packet 5/6
n_rw = usb_control_msg(udev, usb_sndctrlpipe(udev, 0), 0x01, USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0001, 0x000F, NULL, 0, 500);
if (validate_write(0, n_rw, "packet 5/6") < 0)
	return 1;
//Generated from packet 7/8
n_rw = usb_control_msg(udev, usb_sndctrlpipe(udev, 0), 0x01, USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0000, 0x000F, NULL, 0, 500);
if (validate_write(0, n_rw, "packet 7/8") < 0)
	return 1;
//Generated from packet 9/10
n_rw = usb_control_msg(udev, usb_sndctrlpipe(udev, 0), 0x01, USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0001, 0x000F, NULL, 0, 500);
if (validate_write(0, n_rw, "packet 9/10") < 0)
	return 1;
//Generated from packet 11/12
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0100, 0x0103, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 11/12") < 0)
	return 1;
//Generated from packet 13/14
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0100, 0x0104, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 13/14") < 0)
	return 1;
//Generated from packet 15/16
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0A, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0000, 0x3000, buff, 3, 500);
if (validate_read((char[]){0x2B, 0x00, 0x08}, 3, buff, n_rw, "packet 15/16") < 0)
	return 1;
//Generated from packet 17/18
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0100, 0x0104, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 17/18") < 0)
	return 1;
//Generated from packet 19/20
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0020, 0x0344, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 19/20") < 0)
	return 1;
//Generated from packet 21/22
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0CA1, 0x0348, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 21/22") < 0)
	return 1;
//Generated from packet 23/24
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0020, 0x0346, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 23/24") < 0)
	return 1;
//Generated from packet 25/26
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0981, 0x034A, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 25/26") < 0)
	return 1;
//Generated from packet 27/28
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x02FC, 0x3040, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 27/28") < 0)
	return 1;
//Generated from packet 29/30
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0002, 0x0400, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 29/30") < 0)
	return 1;
//Generated from packet 31/32
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0014, 0x0404, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 31/32") < 0)
	return 1;
//Generated from packet 33/34
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0280, 0x034C, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 33/34") < 0)
	return 1;
//Generated from packet 35/36
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x01E0, 0x034E, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 35/36") < 0)
	return 1;
//Generated from packet 37/38
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x02C0, 0x300A, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 37/38") < 0)
	return 1;
//Generated from packet 39/40
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0E00, 0x300C, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 39/40") < 0)
	return 1;
//Generated from packet 41/42
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0000, 0x0104, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 41/42") < 0)
	return 1;
//Generated from packet 43/44
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0000, 0x0100, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 43/44") < 0)
	return 1;
//Generated from packet 45/46
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0100, 0x0104, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 45/46") < 0)
	return 1;
//Generated from packet 47/48
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0004, 0x0300, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 47/48") < 0)
	return 1;
//Generated from packet 49/50
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0001, 0x0302, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 49/50") < 0)
	return 1;
//Generated from packet 51/52
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0008, 0x0308, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 51/52") < 0)
	return 1;
//Generated from packet 53/54
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0001, 0x030A, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 53/54") < 0)
	return 1;
//Generated from packet 55/56
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0004, 0x0304, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 55/56") < 0)
	return 1;
//Generated from packet 57/58
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0020, 0x0306, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 57/58") < 0)
	return 1;
//Generated from packet 59/60
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x90D8, 0x301A, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 59/60") < 0)
	return 1;
//Generated from packet 61/62
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0000, 0x0104, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 61/62") < 0)
	return 1;
//Generated from packet 63/64
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0100, 0x0100, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 63/64") < 0)
	return 1;
//Generated from packet 65/66
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0A, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0000, 0x300C, buff, 3, 500);
if (validate_read((char[]){0x0E, 0x00, 0x08}, 3, buff, n_rw, "packet 65/66") < 0)
	return 1;
//Generated from packet 67/68
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x90D8, 0x301A, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 67/68") < 0)
	return 1;
//Generated from packet 69/70
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0805, 0x3064, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 69/70") < 0)
	return 1;
//Generated from packet 71/72
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0000, 0x0104, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 71/72") < 0)
	return 1;
//Generated from packet 73/74
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0100, 0x0100, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 73/74") < 0)
	return 1;
//Generated from packet 75/76
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0001, 0x0402, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 75/76") < 0)
	return 1;
//Generated from packet 77/78
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0001, 0x0104, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 77/78") < 0)
	return 1;
//Generated from packet 79/80
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0000, 0x0104, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 79/80") < 0)
	return 1;
//Generated from packet 81/82
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x06C3, 0x3012, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 81/82") < 0)
	return 1;
//Generated from packet 83/84
n_rw = usb_control_msg(udev, usb_rcvctrlpipe(udev, 0), 0x0B, USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0234, 0x305E, buff, 1, 500);
if (validate_read((char[]){0x08}, 1, buff, n_rw, "packet 83/84") < 0)
	return 1;
//Generated from packet 85/86
n_rw = usb_control_msg(udev, usb_sndctrlpipe(udev, 0), 0x01, USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE, 0x0003, 0x000F, NULL, 0, 500);
if (validate_write(0, n_rw, "packet 85/86") < 0)
	return 1;
