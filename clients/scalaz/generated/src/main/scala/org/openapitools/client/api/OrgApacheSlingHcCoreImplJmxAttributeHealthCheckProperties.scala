package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties._

case class OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties (
  hcName: Option[ConfigNodePropertyString],
hcTags: Option[ConfigNodePropertyArray],
hcMbeanName: Option[ConfigNodePropertyString],
mbeanName: Option[ConfigNodePropertyString],
attributeName: Option[ConfigNodePropertyString],
attributeValueConstraint: Option[ConfigNodePropertyString])

object OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesCodecJson: CodecJson[OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties] = CodecJson.derive[OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties]
  implicit val OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesDecoder: EntityDecoder[OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties] = jsonOf[OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties]
  implicit val OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesEncoder: EntityEncoder[OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties] = jsonEncoderOf[OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties]
}
