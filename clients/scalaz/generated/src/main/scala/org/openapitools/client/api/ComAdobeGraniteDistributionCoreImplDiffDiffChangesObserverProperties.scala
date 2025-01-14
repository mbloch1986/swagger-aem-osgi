package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties._

case class ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties (
  enabled: Option[ConfigNodePropertyBoolean],
agentName: Option[ConfigNodePropertyString],
diffPath: Option[ConfigNodePropertyString],
observedPath: Option[ConfigNodePropertyString],
serviceName: Option[ConfigNodePropertyString],
propertyNames: Option[ConfigNodePropertyString],
distributionDelay: Option[ConfigNodePropertyInteger],
serviceUserTarget: Option[ConfigNodePropertyString])

object ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverPropertiesCodecJson: CodecJson[ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties] = CodecJson.derive[ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties]
  implicit val ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverPropertiesDecoder: EntityDecoder[ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties] = jsonOf[ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties]
  implicit val ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverPropertiesEncoder: EntityEncoder[ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties] = jsonEncoderOf[ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties]
}
