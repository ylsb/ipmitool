/*
 * Copyright (c) 2003 Sun Microsystems, Inc.  All Rights Reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * Redistribution of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 
 * Redistribution in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * Neither the name of Sun Microsystems, Inc. or the names of
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * 
 * This software is provided "AS IS," without a warranty of any kind.
 * ALL EXPRESS OR IMPLIED CONDITIONS, REPRESENTATIONS AND WARRANTIES,
 * INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE OR NON-INFRINGEMENT, ARE HEREBY EXCLUDED.
 * SUN MICROSYSTEMS, INC. ("SUN") AND ITS LICENSORS SHALL NOT BE LIABLE
 * FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING, MODIFYING
 * OR DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.  IN NO EVENT WILL
 * SUN OR ITS LICENSORS BE LIABLE FOR ANY LOST REVENUE, PROFIT OR DATA,
 * OR FOR DIRECT, INDIRECT, SPECIAL, CONSEQUENTIAL, INCIDENTAL OR
 * PUNITIVE DAMAGES, HOWEVER CAUSED AND REGARDLESS OF THE THEORY OF
 * LIABILITY, ARISING OUT OF THE USE OF OR INABILITY TO USE THIS SOFTWARE,
 * EVEN IF SUN HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * 
 * You acknowledge that this software is not designed or intended for use
 * in the design, construction, operation or maintenance of any nuclear
 * facility.
 */

#ifndef IPMI_CONSTANTS_H
#define IPMI_CONSTANTS_H


/*
 * COMMANDS
 */
#define IPMI_GET_SDR_REPOSITORY_INFO            0x20
#define IMPI_SOL_ACTIVATING                     0x20
#define IMPI_SET_SOL_CONFIG_PARAMETERS          0x21
#define IMPI_GET_SOL_CONFIG_PARAMETERS          0x22
#define IPMI_ACTIVATE_PAYLOAD                   0x48
#define IPMI_DEACTIVATE_PAYLOAD                 0x49
#define IPMI_SUSPEND_RESUME_PAYLOAD_ENCRYPTYION 0x55


#define IPMI_SESSION_AUTHTYPE_NONE      0x0
#define IPMI_SESSION_AUTHTYPE_MD2       0x1
#define IPMI_SESSION_AUTHTYPE_MD5   	0x2
#define IPMI_SESSION_AUTHTYPE_KEY	    0x4
#define IPMI_SESSION_AUTHTYPE_OEM       0x5
#define IPMI_SESSION_AUTHTYPE_RMCP_PLUS 0x6


#define IPMI_SESSION_PRIV_CALLBACK	0x1
#define IPMI_SESSION_PRIV_USER		0x2
#define IPMI_SESSION_PRIV_OPERATOR	0x3
#define IPMI_SESSION_PRIV_ADMIN		0x4
#define IPMI_SESSION_PRIV_OEM		0x5

#define IPMI_SET_IN_PROGRESS_SET_COMPLETE 0x00
#define IPMI_SET_IN_PROGRESS_IN_PROGRESS  0x01
#define IPMI_SET_IN_PROGRESS_COMMIT_WRITE 0x02

#endif /*IPMI_CONSTANTS_H*/
