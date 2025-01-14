/*
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * API version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type OrgApacheSlingJcrWebdavImplServletsSimpleWebDavServletProperties struct {
	DavRoot ConfigNodePropertyString `json:"dav.root,omitempty"`
	DavCreateAbsoluteUri ConfigNodePropertyBoolean `json:"dav.create-absolute-uri,omitempty"`
	DavRealm ConfigNodePropertyString `json:"dav.realm,omitempty"`
	CollectionTypes ConfigNodePropertyArray `json:"collection.types,omitempty"`
	FilterPrefixes ConfigNodePropertyArray `json:"filter.prefixes,omitempty"`
	FilterTypes ConfigNodePropertyString `json:"filter.types,omitempty"`
	FilterUris ConfigNodePropertyString `json:"filter.uris,omitempty"`
	TypeCollections ConfigNodePropertyString `json:"type.collections,omitempty"`
	TypeNoncollections ConfigNodePropertyString `json:"type.noncollections,omitempty"`
	TypeContent ConfigNodePropertyString `json:"type.content,omitempty"`
}
