//
// ComDayCqWcmMsmImplRolloutManagerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqWcmMsmImplRolloutManagerImplProperties: JSONEncodable {
    public var eventFilter: ConfigNodePropertyString?
    public var rolloutmgrExcludedpropsDefault: ConfigNodePropertyArray?
    public var rolloutmgrExcludedparagraphpropsDefault: ConfigNodePropertyArray?
    public var rolloutmgrExcludednodetypesDefault: ConfigNodePropertyArray?
    public var rolloutmgrThreadpoolMaxsize: ConfigNodePropertyInteger?
    public var rolloutmgrThreadpoolMaxshutdowntime: ConfigNodePropertyInteger?
    public var rolloutmgrThreadpoolPriority: ConfigNodePropertyDropDown?
    public var rolloutmgrCommitSize: ConfigNodePropertyInteger?
    public var rolloutmgrConflicthandlingEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["event.filter"] = self.eventFilter?.encodeToJSON()
        nillableDictionary["rolloutmgr.excludedprops.default"] = self.rolloutmgrExcludedpropsDefault?.encodeToJSON()
        nillableDictionary["rolloutmgr.excludedparagraphprops.default"] = self.rolloutmgrExcludedparagraphpropsDefault?.encodeToJSON()
        nillableDictionary["rolloutmgr.excludednodetypes.default"] = self.rolloutmgrExcludednodetypesDefault?.encodeToJSON()
        nillableDictionary["rolloutmgr.threadpool.maxsize"] = self.rolloutmgrThreadpoolMaxsize?.encodeToJSON()
        nillableDictionary["rolloutmgr.threadpool.maxshutdowntime"] = self.rolloutmgrThreadpoolMaxshutdowntime?.encodeToJSON()
        nillableDictionary["rolloutmgr.threadpool.priority"] = self.rolloutmgrThreadpoolPriority?.encodeToJSON()
        nillableDictionary["rolloutmgr.commit.size"] = self.rolloutmgrCommitSize?.encodeToJSON()
        nillableDictionary["rolloutmgr.conflicthandling.enabled"] = self.rolloutmgrConflicthandlingEnabled?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}