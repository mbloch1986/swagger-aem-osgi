//
// ComDayCqDamScene7ImplScene7APIClientImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamScene7ImplScene7APIClientImplProperties: JSONEncodable {
    public var cqDamScene7ApiclientRecordsperpageNofilterName: ConfigNodePropertyInteger?
    public var cqDamScene7ApiclientRecordsperpageWithfilterName: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.dam.scene7.apiclient.recordsperpage.nofilter.name"] = self.cqDamScene7ApiclientRecordsperpageNofilterName?.encodeToJSON()
        nillableDictionary["cq.dam.scene7.apiclient.recordsperpage.withfilter.name"] = self.cqDamScene7ApiclientRecordsperpageWithfilterName?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
