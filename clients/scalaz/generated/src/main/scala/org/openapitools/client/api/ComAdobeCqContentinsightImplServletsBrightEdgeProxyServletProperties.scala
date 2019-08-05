package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties._

case class ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties (
  brightedgeUrl: Option[ConfigNodePropertyString])

object ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletPropertiesCodecJson: CodecJson[ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties] = CodecJson.derive[ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties]
  implicit val ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletPropertiesDecoder: EntityDecoder[ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties] = jsonOf[ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties]
  implicit val ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletPropertiesEncoder: EntityEncoder[ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties] = jsonEncoderOf[ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties]
}