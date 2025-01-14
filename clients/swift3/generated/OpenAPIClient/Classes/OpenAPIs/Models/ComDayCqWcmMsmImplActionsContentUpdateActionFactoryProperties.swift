//
// ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqWcmMsmImplActionsContentUpdateActionFactoryProperties: JSONEncodable {

    public var cqWcmMsmActionExcludednodetypes: ConfigNodePropertyArray?
    public var cqWcmMsmActionExcludedparagraphitems: ConfigNodePropertyArray?
    public var cqWcmMsmActionExcludedprops: ConfigNodePropertyArray?
    public var cqWcmMsmActionIgnoredMixin: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["cq.wcm.msm.action.excludednodetypes"] = self.cqWcmMsmActionExcludednodetypes?.encodeToJSON()
        nillableDictionary["cq.wcm.msm.action.excludedparagraphitems"] = self.cqWcmMsmActionExcludedparagraphitems?.encodeToJSON()
        nillableDictionary["cq.wcm.msm.action.excludedprops"] = self.cqWcmMsmActionExcludedprops?.encodeToJSON()
        nillableDictionary["cq.wcm.msm.action.ignoredMixin"] = self.cqWcmMsmActionIgnoredMixin?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

