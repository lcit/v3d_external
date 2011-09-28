/* cdsStub.h
   Generated by gSOAP 2.8.3 from cdsModHeader.h

Copyright(C) 2000-2011, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef cdsStub_H
#define cdsStub_H
#include <vector>
#define SOAP_NAMESPACE_OF_ns1	""
#define SOAP_NAMESPACE_OF_ns1	""
#define SOAP_NAMESPACE_OF_fw	"http://ws.FlyWorkstation.it.janelia.org/"
#define SOAP_NAMESPACE_OF_ns2	"http://jaxb.dev.java.net/array"
#ifndef WITH_NOGLOBAL
#define WITH_NOGLOBAL
#endif
#include "../gsoap2/stdsoap2.h"

namespace cds {

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_cds_fw__ontologyAnnotation
#define SOAP_TYPE_cds_fw__ontologyAnnotation (8)
/* fw:ontologyAnnotation */
class SOAP_CMAC fw__ontologyAnnotation
{
public:
	LONG64 *sessionId;	/* optional element of type xsd:long */
	LONG64 *targetEntityId;	/* optional element of type xsd:long */
	LONG64 *keyEntityId;	/* optional element of type xsd:long */
	std::string *keyString;	/* optional element of type xsd:string */
	LONG64 *valueEntityId;	/* optional element of type xsd:long */
	std::string *valueString;	/* optional element of type xsd:string */
	LONG64 *id;	/* optional attribute */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 8; } /* = unique id SOAP_TYPE_cds_fw__ontologyAnnotation */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         fw__ontologyAnnotation() { fw__ontologyAnnotation::soap_default(NULL); }
	virtual ~fw__ontologyAnnotation() { }
};
#endif

#ifndef SOAP_TYPE_cds__fw__entity_entityDataSet
#define SOAP_TYPE_cds__fw__entity_entityDataSet (29)
/* fw:entity-entityDataSet */
class SOAP_CMAC _fw__entity_entityDataSet
{
public:
	std::vector<class fw__entityData * >entityData;	/* optional element of type fw:entityData */
public:
	virtual int soap_type() const { return 29; } /* = unique id SOAP_TYPE_cds__fw__entity_entityDataSet */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _fw__entity_entityDataSet() { _fw__entity_entityDataSet::soap_default(NULL); }
	virtual ~_fw__entity_entityDataSet() { }
};
#endif

#ifndef SOAP_TYPE_cds_fw__entity
#define SOAP_TYPE_cds_fw__entity (9)
/* fw:entity */
class SOAP_CMAC fw__entity
{
public:
	std::string *name;	/* optional element of type xsd:string */
	std::string *user;	/* optional element of type fw:user */
	std::string *entityStatus;	/* optional element of type fw:entityStatus */
	std::string *entityType;	/* optional element of type fw:entityType */
	_fw__entity_entityDataSet *entityDataSet;	/* optional element of type fw:entity-entityDataSet */
	LONG64 *id;	/* optional attribute */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 9; } /* = unique id SOAP_TYPE_cds_fw__entity */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         fw__entity() { fw__entity::soap_default(NULL); }
	virtual ~fw__entity() { }
};
#endif

#ifndef SOAP_TYPE_cds_fw__entityData
#define SOAP_TYPE_cds_fw__entityData (10)
/* fw:entityData */
class SOAP_CMAC fw__entityData
{
public:
	std::string *entityAttribute;	/* optional element of type fw:entityAttribute */
	fw__entity *childEntity;	/* optional element of type fw:entity */
	std::string *user;	/* optional element of type fw:user */
	std::string *value;	/* optional element of type xsd:string */
	int *orderIndex;	/* optional element of type xsd:int */
	LONG64 *id;	/* optional attribute */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 10; } /* = unique id SOAP_TYPE_cds_fw__entityData */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         fw__entityData() { fw__entityData::soap_default(NULL); }
	virtual ~fw__entityData() { }
};
#endif

#ifndef SOAP_TYPE_cds__fw__ontologyKeyBindings_keyBindingSet
#define SOAP_TYPE_cds__fw__ontologyKeyBindings_keyBindingSet (36)
/* fw:ontologyKeyBindings-keyBindingSet */
class SOAP_CMAC _fw__ontologyKeyBindings_keyBindingSet
{
public:
	std::vector<class fw__ontologyKeyBind * >keyBinding;	/* optional element of type fw:ontologyKeyBind */
public:
	virtual int soap_type() const { return 36; } /* = unique id SOAP_TYPE_cds__fw__ontologyKeyBindings_keyBindingSet */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _fw__ontologyKeyBindings_keyBindingSet() { _fw__ontologyKeyBindings_keyBindingSet::soap_default(NULL); }
	virtual ~_fw__ontologyKeyBindings_keyBindingSet() { }
};
#endif

#ifndef SOAP_TYPE_cds_fw__ontologyKeyBindings
#define SOAP_TYPE_cds_fw__ontologyKeyBindings (11)
/* fw:ontologyKeyBindings */
class SOAP_CMAC fw__ontologyKeyBindings
{
public:
	std::string *user;	/* optional element of type xsd:string */
	LONG64 *ontologyId;	/* optional element of type xsd:long */
	_fw__ontologyKeyBindings_keyBindingSet *keyBindingSet;	/* optional element of type fw:ontologyKeyBindings-keyBindingSet */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 11; } /* = unique id SOAP_TYPE_cds_fw__ontologyKeyBindings */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         fw__ontologyKeyBindings() { fw__ontologyKeyBindings::soap_default(NULL); }
	virtual ~fw__ontologyKeyBindings() { }
};
#endif

#ifndef SOAP_TYPE_cds_fw__ontologyKeyBind
#define SOAP_TYPE_cds_fw__ontologyKeyBind (12)
/* fw:ontologyKeyBind */
class SOAP_CMAC fw__ontologyKeyBind
{
public:
	std::string *key;	/* optional element of type xsd:string */
	LONG64 *ontologyTermId;	/* optional element of type xsd:long */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 12; } /* = unique id SOAP_TYPE_cds_fw__ontologyKeyBind */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         fw__ontologyKeyBind() { fw__ontologyKeyBind::soap_default(NULL); }
	virtual ~fw__ontologyKeyBind() { }
};
#endif

#ifndef SOAP_TYPE_cds_fw__annotationSession
#define SOAP_TYPE_cds_fw__annotationSession (13)
/* fw:annotationSession */
class SOAP_CMAC fw__annotationSession
{
public:
	LONG64 *id;	/* optional attribute */
	std::string *name;	/* optional attribute */
	std::string *owner;	/* optional attribute */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 13; } /* = unique id SOAP_TYPE_cds_fw__annotationSession */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         fw__annotationSession() { fw__annotationSession::soap_default(NULL); }
	virtual ~fw__annotationSession() { }
};
#endif

#ifndef SOAP_TYPE_cds_fw__entityArray
#define SOAP_TYPE_cds_fw__entityArray (14)
/* fw:entityArray */
class SOAP_CMAC fw__entityArray
{
public:
	std::vector<fw__entity * >item;	/* optional element of type fw:entity */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 14; } /* = unique id SOAP_TYPE_cds_fw__entityArray */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         fw__entityArray() { fw__entityArray::soap_default(NULL); }
	virtual ~fw__entityArray() { }
};
#endif

#ifndef SOAP_TYPE_cds_fw__entityDataArray
#define SOAP_TYPE_cds_fw__entityDataArray (15)
/* fw:entityDataArray */
class SOAP_CMAC fw__entityDataArray
{
public:
	std::vector<fw__entityData * >item;	/* optional element of type fw:entityData */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 15; } /* = unique id SOAP_TYPE_cds_fw__entityDataArray */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         fw__entityDataArray() { fw__entityDataArray::soap_default(NULL); }
	virtual ~fw__entityDataArray() { }
};
#endif

#ifndef SOAP_TYPE_cds_ns2__longArray
#define SOAP_TYPE_cds_ns2__longArray (16)
/* ns2:longArray */
class SOAP_CMAC ns2__longArray
{
public:
	std::vector<LONG64 >item;	/* optional element of type xsd:long */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 16; } /* = unique id SOAP_TYPE_cds_ns2__longArray */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns2__longArray() { ns2__longArray::soap_default(NULL); }
	virtual ~ns2__longArray() { }
};
#endif

#ifndef SOAP_TYPE_cds_fw__getEntityByIdResponse
#define SOAP_TYPE_cds_fw__getEntityByIdResponse (42)
/* fw:getEntityByIdResponse */
struct fw__getEntityByIdResponse
{
public:
	fw__entity *return_;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fw:entity */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getEntityById
#define SOAP_TYPE_cds_fw__getEntityById (45)
/* fw:getEntityById */
struct fw__getEntityById
{
public:
	LONG64 entityId;	/* required element of type xsd:long */
};
#endif

#ifndef SOAP_TYPE_cds_fw__removeAnnotationResponse
#define SOAP_TYPE_cds_fw__removeAnnotationResponse (46)
/* fw:removeAnnotationResponse */
struct fw__removeAnnotationResponse
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_cds_fw__removeAnnotation
#define SOAP_TYPE_cds_fw__removeAnnotation (49)
/* fw:removeAnnotation */
struct fw__removeAnnotation
{
public:
	LONG64 annotationId;	/* required element of type xsd:long */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getOntologyResponse
#define SOAP_TYPE_cds_fw__getOntologyResponse (50)
/* fw:getOntologyResponse */
struct fw__getOntologyResponse
{
public:
	fw__entity *return_;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fw:entity */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getOntology
#define SOAP_TYPE_cds_fw__getOntology (53)
/* fw:getOntology */
struct fw__getOntology
{
public:
	LONG64 rootId;	/* required element of type xsd:long */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getAnnotationSessionResponse
#define SOAP_TYPE_cds_fw__getAnnotationSessionResponse (54)
/* fw:getAnnotationSessionResponse */
struct fw__getAnnotationSessionResponse
{
public:
	fw__annotationSession *return_;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fw:annotationSession */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getAnnotationSession
#define SOAP_TYPE_cds_fw__getAnnotationSession (58)
/* fw:getAnnotationSession */
struct fw__getAnnotationSession
{
public:
	LONG64 sessionId;	/* required element of type xsd:long */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getEntityTreeResponse
#define SOAP_TYPE_cds_fw__getEntityTreeResponse (59)
/* fw:getEntityTreeResponse */
struct fw__getEntityTreeResponse
{
public:
	fw__entity *return_;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fw:entity */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getEntityTree
#define SOAP_TYPE_cds_fw__getEntityTree (62)
/* fw:getEntityTree */
struct fw__getEntityTree
{
public:
	LONG64 entityId;	/* required element of type xsd:long */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getAnnotationsForEntityResponse
#define SOAP_TYPE_cds_fw__getAnnotationsForEntityResponse (63)
/* fw:getAnnotationsForEntityResponse */
struct fw__getAnnotationsForEntityResponse
{
public:
	fw__entityArray *return_;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fw:entityArray */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getAnnotationsForEntity
#define SOAP_TYPE_cds_fw__getAnnotationsForEntity (67)
/* fw:getAnnotationsForEntity */
struct fw__getAnnotationsForEntity
{
public:
	LONG64 entityId;	/* required element of type xsd:long */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getAnnotationsForEntitiesResponse
#define SOAP_TYPE_cds_fw__getAnnotationsForEntitiesResponse (68)
/* fw:getAnnotationsForEntitiesResponse */
struct fw__getAnnotationsForEntitiesResponse
{
public:
	fw__entityArray *return_;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fw:entityArray */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getAnnotationsForEntities
#define SOAP_TYPE_cds_fw__getAnnotationsForEntities (72)
/* fw:getAnnotationsForEntities */
struct fw__getAnnotationsForEntities
{
public:
	ns2__longArray *entityIds;	/* optional element of type ns2:longArray */
};
#endif

#ifndef SOAP_TYPE_cds_fw__reservePortResponse
#define SOAP_TYPE_cds_fw__reservePortResponse (73)
/* fw:reservePortResponse */
struct fw__reservePortResponse
{
public:
	int return_;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_cds_fw__reservePort
#define SOAP_TYPE_cds_fw__reservePort (76)
/* fw:reservePort */
struct fw__reservePort
{
public:
	std::string clientName;	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_cds_fw__registerClientResponse
#define SOAP_TYPE_cds_fw__registerClientResponse (77)
/* fw:registerClientResponse */
struct fw__registerClientResponse
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_cds_fw__registerClient
#define SOAP_TYPE_cds_fw__registerClient (80)
/* fw:registerClient */
struct fw__registerClient
{
public:
	int _port;	/* required element of type xsd:int */
	std::string _endpointUrl;	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_cds_fw__createAnnotationResponse
#define SOAP_TYPE_cds_fw__createAnnotationResponse (81)
/* fw:createAnnotationResponse */
struct fw__createAnnotationResponse
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_cds_fw__createAnnotation
#define SOAP_TYPE_cds_fw__createAnnotation (85)
/* fw:createAnnotation */
struct fw__createAnnotation
{
public:
	fw__ontologyAnnotation *annotation;	/* optional element of type fw:ontologyAnnotation */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getKeybindingsResponse
#define SOAP_TYPE_cds_fw__getKeybindingsResponse (86)
/* fw:getKeybindingsResponse */
struct fw__getKeybindingsResponse
{
public:
	fw__ontologyKeyBindings *return_;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fw:ontologyKeyBindings */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getKeybindings
#define SOAP_TYPE_cds_fw__getKeybindings (90)
/* fw:getKeybindings */
struct fw__getKeybindings
{
public:
	LONG64 ontologyId;	/* required element of type xsd:long */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getParentEntityDataArrayResponse
#define SOAP_TYPE_cds_fw__getParentEntityDataArrayResponse (91)
/* fw:getParentEntityDataArrayResponse */
struct fw__getParentEntityDataArrayResponse
{
public:
	fw__entityDataArray *return_;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fw:entityDataArray */
};
#endif

#ifndef SOAP_TYPE_cds_fw__getParentEntityDataArray
#define SOAP_TYPE_cds_fw__getParentEntityDataArray (95)
/* fw:getParentEntityDataArray */
struct fw__getParentEntityDataArray
{
public:
	LONG64 childEntityId;	/* required element of type xsd:long */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_cds_SOAP_ENV__Header
#define SOAP_TYPE_cds_SOAP_ENV__Header (96)
/* SOAP Header: */
struct SOAP_ENV__Header
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_cds_SOAP_ENV__Code
#define SOAP_TYPE_cds_SOAP_ENV__Code (97)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_cds_SOAP_ENV__Detail
#define SOAP_TYPE_cds_SOAP_ENV__Detail (99)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_cds_SOAP_ENV__Reason
#define SOAP_TYPE_cds_SOAP_ENV__Reason (102)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_cds_SOAP_ENV__Fault
#define SOAP_TYPE_cds_SOAP_ENV__Fault (103)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE_cds__QName
#define SOAP_TYPE_cds__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE_cds__XML
#define SOAP_TYPE_cds__XML (6)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE_cds_fw__user
#define SOAP_TYPE_cds_fw__user (18)
typedef std::string fw__user;
#endif

#ifndef SOAP_TYPE_cds_fw__entityStatus
#define SOAP_TYPE_cds_fw__entityStatus (19)
typedef std::string fw__entityStatus;
#endif

#ifndef SOAP_TYPE_cds_fw__entityType
#define SOAP_TYPE_cds_fw__entityType (20)
typedef std::string fw__entityType;
#endif

#ifndef SOAP_TYPE_cds_fw__entityAttribute
#define SOAP_TYPE_cds_fw__entityAttribute (21)
typedef std::string fw__entityAttribute;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


} // namespace cds


#endif

/* End of cdsStub.h */