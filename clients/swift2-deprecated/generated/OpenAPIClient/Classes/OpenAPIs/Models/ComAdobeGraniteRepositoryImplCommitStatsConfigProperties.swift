//
// ComAdobeGraniteRepositoryImplCommitStatsConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteRepositoryImplCommitStatsConfigProperties: JSONEncodable {
    public var enabled: ConfigNodePropertyBoolean?
    public var intervalSeconds: ConfigNodePropertyInteger?
    public var commitsPerIntervalThreshold: ConfigNodePropertyInteger?
    public var maxLocationLength: ConfigNodePropertyInteger?
    public var maxDetailsShown: ConfigNodePropertyInteger?
    public var minDetailsPercentage: ConfigNodePropertyInteger?
    public var threadMatchers: ConfigNodePropertyArray?
    public var maxGreedyDepth: ConfigNodePropertyInteger?
    public var greedyStackMatchers: ConfigNodePropertyString?
    public var stackFilters: ConfigNodePropertyArray?
    public var stackMatchers: ConfigNodePropertyArray?
    public var stackCategorizers: ConfigNodePropertyArray?
    public var stackShorteners: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["enabled"] = self.enabled?.encodeToJSON()
        nillableDictionary["intervalSeconds"] = self.intervalSeconds?.encodeToJSON()
        nillableDictionary["commitsPerIntervalThreshold"] = self.commitsPerIntervalThreshold?.encodeToJSON()
        nillableDictionary["maxLocationLength"] = self.maxLocationLength?.encodeToJSON()
        nillableDictionary["maxDetailsShown"] = self.maxDetailsShown?.encodeToJSON()
        nillableDictionary["minDetailsPercentage"] = self.minDetailsPercentage?.encodeToJSON()
        nillableDictionary["threadMatchers"] = self.threadMatchers?.encodeToJSON()
        nillableDictionary["maxGreedyDepth"] = self.maxGreedyDepth?.encodeToJSON()
        nillableDictionary["greedyStackMatchers"] = self.greedyStackMatchers?.encodeToJSON()
        nillableDictionary["stackFilters"] = self.stackFilters?.encodeToJSON()
        nillableDictionary["stackMatchers"] = self.stackMatchers?.encodeToJSON()
        nillableDictionary["stackCategorizers"] = self.stackCategorizers?.encodeToJSON()
        nillableDictionary["stackShorteners"] = self.stackShorteners?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}