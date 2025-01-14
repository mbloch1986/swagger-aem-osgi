//
// ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties: JSONEncodable {
    public var preserveHierarchyNodes: ConfigNodePropertyBoolean?
    public var ignoreVersioning: ConfigNodePropertyBoolean?
    public var importAcl: ConfigNodePropertyBoolean?
    public var saveThreshold: ConfigNodePropertyInteger?
    public var preserveUserPaths: ConfigNodePropertyBoolean?
    public var preserveUuid: ConfigNodePropertyBoolean?
    public var preserveUuidNodetypes: ConfigNodePropertyArray?
    public var preserveUuidSubtrees: ConfigNodePropertyArray?
    public var autoCommit: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["preserve.hierarchy.nodes"] = self.preserveHierarchyNodes?.encodeToJSON()
        nillableDictionary["ignore.versioning"] = self.ignoreVersioning?.encodeToJSON()
        nillableDictionary["import.acl"] = self.importAcl?.encodeToJSON()
        nillableDictionary["save.threshold"] = self.saveThreshold?.encodeToJSON()
        nillableDictionary["preserve.user.paths"] = self.preserveUserPaths?.encodeToJSON()
        nillableDictionary["preserve.uuid"] = self.preserveUuid?.encodeToJSON()
        nillableDictionary["preserve.uuid.nodetypes"] = self.preserveUuidNodetypes?.encodeToJSON()
        nillableDictionary["preserve.uuid.subtrees"] = self.preserveUuidSubtrees?.encodeToJSON()
        nillableDictionary["auto.commit"] = self.autoCommit?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
