//
// ComDayCqDamScene7ImplScene7UploadServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamScene7ImplScene7UploadServiceImplProperties: JSONEncodable {
    public var cqDamScene7UploadserviceActivejobtimeoutLabel: ConfigNodePropertyInteger?
    public var cqDamScene7UploadserviceConnectionmaxperrouteLabel: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.dam.scene7.uploadservice.activejobtimeout.label"] = self.cqDamScene7UploadserviceActivejobtimeoutLabel?.encodeToJSON()
        nillableDictionary["cq.dam.scene7.uploadservice.connectionmaxperroute.label"] = self.cqDamScene7UploadserviceConnectionmaxperrouteLabel?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}