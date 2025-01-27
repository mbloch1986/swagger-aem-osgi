//
// OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties: JSONEncodable {
    public var pathDescField: ConfigNodePropertyString?
    public var pathChildField: ConfigNodePropertyString?
    public var pathParentField: ConfigNodePropertyString?
    public var pathExactField: ConfigNodePropertyString?
    public var catchAllField: ConfigNodePropertyString?
    public var collapsedPathField: ConfigNodePropertyString?
    public var pathDepthField: ConfigNodePropertyString?
    public var commitPolicy: ConfigNodePropertyDropDown?
    public var rows: ConfigNodePropertyInteger?
    public var pathRestrictions: ConfigNodePropertyBoolean?
    public var propertyRestrictions: ConfigNodePropertyBoolean?
    public var primarytypesRestrictions: ConfigNodePropertyBoolean?
    public var ignoredProperties: ConfigNodePropertyArray?
    public var usedProperties: ConfigNodePropertyArray?
    public var typeMappings: ConfigNodePropertyArray?
    public var propertyMappings: ConfigNodePropertyArray?
    public var collapseJcrcontentNodes: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["path.desc.field"] = self.pathDescField?.encodeToJSON()
        nillableDictionary["path.child.field"] = self.pathChildField?.encodeToJSON()
        nillableDictionary["path.parent.field"] = self.pathParentField?.encodeToJSON()
        nillableDictionary["path.exact.field"] = self.pathExactField?.encodeToJSON()
        nillableDictionary["catch.all.field"] = self.catchAllField?.encodeToJSON()
        nillableDictionary["collapsed.path.field"] = self.collapsedPathField?.encodeToJSON()
        nillableDictionary["path.depth.field"] = self.pathDepthField?.encodeToJSON()
        nillableDictionary["commit.policy"] = self.commitPolicy?.encodeToJSON()
        nillableDictionary["rows"] = self.rows?.encodeToJSON()
        nillableDictionary["path.restrictions"] = self.pathRestrictions?.encodeToJSON()
        nillableDictionary["property.restrictions"] = self.propertyRestrictions?.encodeToJSON()
        nillableDictionary["primarytypes.restrictions"] = self.primarytypesRestrictions?.encodeToJSON()
        nillableDictionary["ignored.properties"] = self.ignoredProperties?.encodeToJSON()
        nillableDictionary["used.properties"] = self.usedProperties?.encodeToJSON()
        nillableDictionary["type.mappings"] = self.typeMappings?.encodeToJSON()
        nillableDictionary["property.mappings"] = self.propertyMappings?.encodeToJSON()
        nillableDictionary["collapse.jcrcontent.nodes"] = self.collapseJcrcontentNodes?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
