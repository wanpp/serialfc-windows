#ifndef SERIALFC_H
#define SERIALFC_H

#define FSCC_IOCTL_MAGIC 0x8019


#define IOCTL_FASTCOM_ENABLE_RS485 0x80192014
#define IOCTL_FASTCOM_DISABLE_RS485 0x80192015
#define IOCTL_FASTCOM_GET_RS485 0x80192016

#define IOCTL_FASTCOM_ENABLE_ECHO_CANCEL 0x80192017
#define IOCTL_FASTCOM_DISABLE_ECHO_CANCEL 0x80192018
#define IOCTL_FASTCOM_GET_ECHO_CANCEL 0x80192019

#define IOCTL_FASTCOM_ENABLE_TERMINATION 0x80192020
#define IOCTL_FASTCOM_DISABLE_TERMINATION 0x80192021
#define IOCTL_FASTCOM_GET_TERMINATION 0x80192022

#define IOCTL_FASTCOM_SET_SAMPLE_RATE 0x80192023
#define IOCTL_FASTCOM_GET_SAMPLE_RATE 0x80192024

#define IOCTL_FASTCOM_SET_TX_TRIGGER 0x80192025
#define IOCTL_FASTCOM_GET_TX_TRIGGER 0x80192026

#define IOCTL_FASTCOM_SET_RX_TRIGGER 0x80192027
#define IOCTL_FASTCOM_GET_RX_TRIGGER 0x80192028


#endif