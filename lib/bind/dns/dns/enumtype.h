/* $FreeBSD$ */

/*
 * Copyright (C) 2004-2013 Internet Systems Consortium, Inc. ("ISC")
 * Copyright (C) 1998-2003 Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/***************
 ***************
 ***************   THIS FILE IS AUTOMATICALLY GENERATED BY gen.c.
 ***************   DO NOT EDIT!
 ***************
 ***************/

/*! \file */

#ifndef DNS_ENUMTYPE_H
#define DNS_ENUMTYPE_H 1

enum {
	dns_rdatatype_none = 0,
	dns_rdatatype_a = 1,
	dns_rdatatype_ns = 2,
	dns_rdatatype_md = 3,
	dns_rdatatype_mf = 4,
	dns_rdatatype_cname = 5,
	dns_rdatatype_soa = 6,
	dns_rdatatype_mb = 7,
	dns_rdatatype_mg = 8,
	dns_rdatatype_mr = 9,
	dns_rdatatype_null = 10,
	dns_rdatatype_wks = 11,
	dns_rdatatype_ptr = 12,
	dns_rdatatype_hinfo = 13,
	dns_rdatatype_minfo = 14,
	dns_rdatatype_mx = 15,
	dns_rdatatype_txt = 16,
	dns_rdatatype_rp = 17,
	dns_rdatatype_afsdb = 18,
	dns_rdatatype_x25 = 19,
	dns_rdatatype_isdn = 20,
	dns_rdatatype_rt = 21,
	dns_rdatatype_nsap = 22,
	dns_rdatatype_nsap_ptr = 23,
	dns_rdatatype_sig = 24,
	dns_rdatatype_key = 25,
	dns_rdatatype_px = 26,
	dns_rdatatype_gpos = 27,
	dns_rdatatype_aaaa = 28,
	dns_rdatatype_loc = 29,
	dns_rdatatype_nxt = 30,
	dns_rdatatype_srv = 33,
	dns_rdatatype_naptr = 35,
	dns_rdatatype_kx = 36,
	dns_rdatatype_cert = 37,
	dns_rdatatype_a6 = 38,
	dns_rdatatype_dname = 39,
	dns_rdatatype_opt = 41,
	dns_rdatatype_apl = 42,
	dns_rdatatype_ds = 43,
	dns_rdatatype_sshfp = 44,
	dns_rdatatype_ipseckey = 45,
	dns_rdatatype_rrsig = 46,
	dns_rdatatype_nsec = 47,
	dns_rdatatype_dnskey = 48,
	dns_rdatatype_dhcid = 49,
	dns_rdatatype_nsec3 = 50,
	dns_rdatatype_nsec3param = 51,
	dns_rdatatype_tlsa = 52,
	dns_rdatatype_hip = 55,
	dns_rdatatype_spf = 99,
	dns_rdatatype_unspec = 103,
	dns_rdatatype_nid = 104,
	dns_rdatatype_l32 = 105,
	dns_rdatatype_l64 = 106,
	dns_rdatatype_lp = 107,
	dns_rdatatype_eui48 = 108,
	dns_rdatatype_eui64 = 109,
	dns_rdatatype_tkey = 249,
	dns_rdatatype_tsig = 250,
	dns_rdatatype_uri = 256,
	dns_rdatatype_dlv = 32769,
	dns_rdatatype_keydata = 65533,
	dns_rdatatype_ixfr = 251,
	dns_rdatatype_axfr = 252,
	dns_rdatatype_mailb = 253,
	dns_rdatatype_maila = 254,
	dns_rdatatype_any = 255
};

#define dns_rdatatype_none	((dns_rdatatype_t)dns_rdatatype_none)
#define dns_rdatatype_a		((dns_rdatatype_t)dns_rdatatype_a)
#define dns_rdatatype_ns	((dns_rdatatype_t)dns_rdatatype_ns)
#define dns_rdatatype_md	((dns_rdatatype_t)dns_rdatatype_md)
#define dns_rdatatype_mf	((dns_rdatatype_t)dns_rdatatype_mf)
#define dns_rdatatype_cname	((dns_rdatatype_t)dns_rdatatype_cname)
#define dns_rdatatype_soa	((dns_rdatatype_t)dns_rdatatype_soa)
#define dns_rdatatype_mb	((dns_rdatatype_t)dns_rdatatype_mb)
#define dns_rdatatype_mg	((dns_rdatatype_t)dns_rdatatype_mg)
#define dns_rdatatype_mr	((dns_rdatatype_t)dns_rdatatype_mr)
#define dns_rdatatype_null	((dns_rdatatype_t)dns_rdatatype_null)
#define dns_rdatatype_wks	((dns_rdatatype_t)dns_rdatatype_wks)
#define dns_rdatatype_ptr	((dns_rdatatype_t)dns_rdatatype_ptr)
#define dns_rdatatype_hinfo	((dns_rdatatype_t)dns_rdatatype_hinfo)
#define dns_rdatatype_minfo	((dns_rdatatype_t)dns_rdatatype_minfo)
#define dns_rdatatype_mx	((dns_rdatatype_t)dns_rdatatype_mx)
#define dns_rdatatype_txt	((dns_rdatatype_t)dns_rdatatype_txt)
#define dns_rdatatype_rp	((dns_rdatatype_t)dns_rdatatype_rp)
#define dns_rdatatype_afsdb	((dns_rdatatype_t)dns_rdatatype_afsdb)
#define dns_rdatatype_x25	((dns_rdatatype_t)dns_rdatatype_x25)
#define dns_rdatatype_isdn	((dns_rdatatype_t)dns_rdatatype_isdn)
#define dns_rdatatype_rt	((dns_rdatatype_t)dns_rdatatype_rt)
#define dns_rdatatype_nsap	((dns_rdatatype_t)dns_rdatatype_nsap)
#define dns_rdatatype_nsap_ptr	((dns_rdatatype_t)dns_rdatatype_nsap_ptr)
#define dns_rdatatype_sig	((dns_rdatatype_t)dns_rdatatype_sig)
#define dns_rdatatype_key	((dns_rdatatype_t)dns_rdatatype_key)
#define dns_rdatatype_px	((dns_rdatatype_t)dns_rdatatype_px)
#define dns_rdatatype_gpos	((dns_rdatatype_t)dns_rdatatype_gpos)
#define dns_rdatatype_aaaa	((dns_rdatatype_t)dns_rdatatype_aaaa)
#define dns_rdatatype_loc	((dns_rdatatype_t)dns_rdatatype_loc)
#define dns_rdatatype_nxt	((dns_rdatatype_t)dns_rdatatype_nxt)
#define dns_rdatatype_srv	((dns_rdatatype_t)dns_rdatatype_srv)
#define dns_rdatatype_naptr	((dns_rdatatype_t)dns_rdatatype_naptr)
#define dns_rdatatype_kx	((dns_rdatatype_t)dns_rdatatype_kx)
#define dns_rdatatype_cert	((dns_rdatatype_t)dns_rdatatype_cert)
#define dns_rdatatype_a6	((dns_rdatatype_t)dns_rdatatype_a6)
#define dns_rdatatype_dname	((dns_rdatatype_t)dns_rdatatype_dname)
#define dns_rdatatype_opt	((dns_rdatatype_t)dns_rdatatype_opt)
#define dns_rdatatype_apl	((dns_rdatatype_t)dns_rdatatype_apl)
#define dns_rdatatype_ds	((dns_rdatatype_t)dns_rdatatype_ds)
#define dns_rdatatype_sshfp	((dns_rdatatype_t)dns_rdatatype_sshfp)
#define dns_rdatatype_ipseckey	((dns_rdatatype_t)dns_rdatatype_ipseckey)
#define dns_rdatatype_rrsig	((dns_rdatatype_t)dns_rdatatype_rrsig)
#define dns_rdatatype_nsec	((dns_rdatatype_t)dns_rdatatype_nsec)
#define dns_rdatatype_dnskey	((dns_rdatatype_t)dns_rdatatype_dnskey)
#define dns_rdatatype_dhcid	((dns_rdatatype_t)dns_rdatatype_dhcid)
#define dns_rdatatype_nsec3	((dns_rdatatype_t)dns_rdatatype_nsec3)
#define dns_rdatatype_nsec3param	((dns_rdatatype_t)dns_rdatatype_nsec3param)
#define dns_rdatatype_tlsa	((dns_rdatatype_t)dns_rdatatype_tlsa)
#define dns_rdatatype_hip	((dns_rdatatype_t)dns_rdatatype_hip)
#define dns_rdatatype_spf	((dns_rdatatype_t)dns_rdatatype_spf)
#define dns_rdatatype_unspec	((dns_rdatatype_t)dns_rdatatype_unspec)
#define dns_rdatatype_nid	((dns_rdatatype_t)dns_rdatatype_nid)
#define dns_rdatatype_l32	((dns_rdatatype_t)dns_rdatatype_l32)
#define dns_rdatatype_l64	((dns_rdatatype_t)dns_rdatatype_l64)
#define dns_rdatatype_lp	((dns_rdatatype_t)dns_rdatatype_lp)
#define dns_rdatatype_eui48	((dns_rdatatype_t)dns_rdatatype_eui48)
#define dns_rdatatype_eui64	((dns_rdatatype_t)dns_rdatatype_eui64)
#define dns_rdatatype_tkey	((dns_rdatatype_t)dns_rdatatype_tkey)
#define dns_rdatatype_tsig	((dns_rdatatype_t)dns_rdatatype_tsig)
#define dns_rdatatype_uri	((dns_rdatatype_t)dns_rdatatype_uri)
#define dns_rdatatype_dlv	((dns_rdatatype_t)dns_rdatatype_dlv)
#define dns_rdatatype_keydata	((dns_rdatatype_t)dns_rdatatype_keydata)
#define dns_rdatatype_ixfr	((dns_rdatatype_t)dns_rdatatype_ixfr)
#define dns_rdatatype_axfr	((dns_rdatatype_t)dns_rdatatype_axfr)
#define dns_rdatatype_mailb	((dns_rdatatype_t)dns_rdatatype_mailb)
#define dns_rdatatype_maila	((dns_rdatatype_t)dns_rdatatype_maila)
#define dns_rdatatype_any	((dns_rdatatype_t)dns_rdatatype_any)

#endif /* DNS_ENUMTYPE_H */
